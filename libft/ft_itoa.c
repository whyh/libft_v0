/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 14:40:07 by dderevyn          #+#    #+#             */
/*   Updated: 2018/11/04 18:47:46 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*a;
	int			i;
	long long	p;

	i = 1;
	if (n < 0)
		++i;
	p = -n;
	if (n > 0)
		p = n;
	while (p / 10 > 0 && ++i > 0)
		p = p / 10;
	if (n == INT_MIN)
		i = 11;
	a = ft_strnew(i);
	if (a == NULL)
		return (NULL);
	p = n;
	if (p < 0 && (p = -p) > 0)
		*a = '-';
	while ((i > 0 && n >= 0) | (i > 1 && n < 0) && (a[--i] = p % 10 + 48) >= 0)
		p = p / 10;
	return (a);
}
