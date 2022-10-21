/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:06:47 by fstitou           #+#    #+#             */
/*   Updated: 2022/10/21 03:36:43 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
#define PARSE_H

#include <stdlib.h> 
#include "GNL/get_next_line.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

// init

typedef struct s_parse
{
    int NO;
    int SO;
    int WE;
    int EA;
    int R;
    int floor;
    int ceil;
    int inv_line;
    int wg_char;
    int no_pos;
    int no_map;
}   t_parse;


#endif