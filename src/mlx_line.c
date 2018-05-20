/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpusel <adpusel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 10:48:07 by adpusel           #+#    #+#             */
/*   Updated: 2017/11/16 12:45:50 by adpusel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf_header.h"

void set_line_1(int x, int y, t_line l)
{
	l->x_1 = x;
	l->y_1 = y;
};

void set_line_2(int x, int y, t_line l)
{
	l->x_2 = x;
	l->y_2 = y;
	l->dx = l->x_2 - l->x_1;
	l->dy = l->y_2 - l->y_1;
};
