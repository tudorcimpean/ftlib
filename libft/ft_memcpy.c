/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 22:09:57 by tcimpean          #+#    #+#             */
/*   Updated: 2015/10/25 22:28:45 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*c1;
	char	*c2;
	int		i;

	if ((n == 0) || (dst == src))
		return (dst);
	c1 = (char *)dst;
	c2 = (char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;	
	}
	return (dst);
}
