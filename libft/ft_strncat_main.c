/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 20:47:59 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/08 20:53:28 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n);

int		main (void)
{
	char src[50], dest[50];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	strncat(dest, src, 44);

	printf("Final destination string : |%s|\n", dest);

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	ft_strncat(dest, src, 44);

	printf("Final destination string : |%s|\n", dest);
	return(0);
}
