/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainMatch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 08:30:16 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/16 16:35:23 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "match/ex01/nmatch.c"

int		main(int ac, char **av)
{
	(void)ac;
	printf("\t:%d:\n", nmatch(av[1], av[2]));
	return (0);
}
