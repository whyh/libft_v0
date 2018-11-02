/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dderevyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 15:25:16 by dderevyn          #+#    #+#             */
/*   Updated: 2018/10/31 16:54:51 by dderevyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	while (s1[i])
		++i;
	s2 = (char *)malloc((i + 1) * sizeof(*s2));
	if (s2 == NULL)
		return (NULL);
	while (*s1)
		*s2++ = *s1++;
	*s2 = '\0';
	return (s2 - i);
}
