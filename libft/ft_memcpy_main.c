/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 22:35:49 by tcimpean          #+#    #+#             */
/*   Updated: 2015/10/26 22:54:05 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *dst, const void *src, size_t n);

int		main (void)
{
	char src[50] = "http://www.tutorialspoint.com";
	char dest[70] = "adsasdaasdfggfdfghfgddfgdfgdfgasdadsadsasdadsadsads";

	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src));
	printf("After memcpy dest = %s\n", dest);

	return(0);
}
