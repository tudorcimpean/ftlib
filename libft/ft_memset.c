/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 20:45:23 by tcimpean          #+#    #+#             */
/*   Updated: 2015/10/25 21:09:43 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	if (len == 0)
		return (b);
	a = (unsigned char *)b;
	while (len)
	{
		*a = (unsigned char)c;
		if (len)
			a++;
		len--;
	}
	return (b);
}
