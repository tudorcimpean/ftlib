/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 20:30:27 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/08 20:42:29 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *s1, const char *s2);

int		main (void)
{
	char src[50], dest[50];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	strcat(dest, src);
	printf("Final destination string : |%s|\n", dest);

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	ft_strcat(dest, src);
	printf("Final destination string : |%s|\n", dest);
	ft_strcat(dest, src);


	return(0);
}
