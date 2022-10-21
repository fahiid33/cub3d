/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:06:17 by fstitou           #+#    #+#             */
/*   Updated: 2022/10/21 01:51:50 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

void	errors(int err)
{
	if (err == 1)
	{
		write(2, "Error in file format\n", 21);
		exit(1);
	}
}

int check_file(char *file)
{
    char *str;
    int fd;

    fd = open(file, O_RDONLY);
    if (fd == -1)
        return (0);
    str = strrchr(file, '.');
    if (str == NULL || strcmp(str, ".cub") != 0)
        return (0);
    return (1);
}

int main(int ac, char **av)
{
    char *line;
    int i;
    char **tab;

	(void)ac;
	i = 0;
	tab = malloc(sizeof(char *) * 100);
    if (!check_file(av[1]))
        errors(1);
	else
	{
		while (1)
		{
			line = get_next_line(open(av[1], O_RDONLY));
			if (line == NULL)
				break;
			tab[i] = line;
			free(line);
			i++;
		}
		tab[i] = 0;
	}
	i = 0;
	while (tab[i])
	{
		printf("%s", tab[i]);
		i++;
	}
}