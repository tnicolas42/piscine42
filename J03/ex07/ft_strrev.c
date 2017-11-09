/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 16:23:34 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/06 18:20:46 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		size;
	int		i;
	char	c;

	size = -1;
	while (str[++size] != '\0')
		;
	i = -1;
	while (++i < (size / 2))
	{
		c = str[size - i - 1];
		str[size - i - 1] = str[i];
		str[i] = c;
	}
	return (str);
}
