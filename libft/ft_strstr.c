/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 23:07:30 by tcimpean          #+#    #+#             */
/*   Updated: 2015/10/28 23:43:56 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int k;
	char *s3;

	i = 0;
	j = 0;
	s3 = NULL;
	if (s2 == NULL)
		return ((char *)s1);
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else
			i++;
	}
	if (s2[j] == '\0')
	{
		k = i-j;
		i = 0;
		while (s1[k] != '\0')
		{
			s3[i] = s1[k];
			i++;
			k++;
		}
		s3[i] = '\0';
		return ((char *)s3);
	}
	return (0);
}			
