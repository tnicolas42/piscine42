/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:41:04 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/13 21:42:19 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "J08/ex06/ft_stock_par.h"

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(c));
}