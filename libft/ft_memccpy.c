/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 22:57:17 by tcimpean          #+#    #+#             */
/*   Updated: 2015/10/26 23:12:33 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memccpy(void *dst, const void *src,  int c, size_t n)
{
	char    		*c1;
	char    		*c2;
	int     		i;
	unsigned char	a;

	if (n == 0 || dst == src)
		return(dst);
	i = 0;
	a = (char)c;
	c1 = (char *)dst;
	c2 = (char *)src;
	while (i < n)
	{
		c1[i] = c2[i];
		if (c2[i] == a)
			i = n;
		i++;
	}
	return(dst);
}
