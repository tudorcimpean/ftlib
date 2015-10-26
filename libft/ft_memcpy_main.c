/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 22:35:49 by tcimpean          #+#    #+#             */
/*   Updated: 2015/10/26 23:12:44 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memccpy(void *dst, const void *src,  int c, size_t n);

int		main (void)
{
	char src[10] = "abcAdefgh";
	char dest[10] = "123456789";

	printf("Before memcpy dest = %s\n", dest);
	memccpy(dest, src, 65, 6);
	printf("After memcpy dest = %s\n", dest);

	return(0);
}
