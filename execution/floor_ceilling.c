/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floor_ceilling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhalil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:58:09 by hkhalil           #+#    #+#             */
/*   Updated: 2022/11/05 23:40:38 by hkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

void	floor_ceilling(t_data *game)
{
	int	i;

	i = 0;
	while (i < RY)
	{
		if (i < RY/2)
			DDA(0, i, RX, i, game, game->ceilling);
		else
			DDA(0, i, RX, i, game, game->floor);
		i++;
	}
}