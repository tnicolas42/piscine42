/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 10:10:28 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/22 12:27:24 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/incl.h"

void	ft_swap(int *a, int *b)
{
	int		swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
