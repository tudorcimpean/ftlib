/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trad <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/17 22:03:30 by trad              #+#    #+#             */
/*   Updated: 2015/11/28 21:11:34 by trad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(char const *s, char c)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (*s)
	{
		if (k == 0 && *s != c)
		{
			k = 1;
			i++;
		}
		else if (k == 1 && *s == c)
			k = 0;
		s++;
	}
	return (i);
}

int			det_len(char const *s, char c)
{
	int		i;

	i = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**a;
	int		k;
	int		i;

	if (!s)
		return (0);
	i = 0;
	k = ft_length(s, c);
	a = (char **)malloc(sizeof(char *) * (k + 1));
	if (!a)
		return (0);
	while (k--)
	{
		while (*s == c && *s != '\0')
			s++;
		a[i] = ft_strsub(s, 0, det_len(s, c));
		if (a[i] == 0)
			return (0);
		s = s + det_len(s, c);
		i++;
	}
	a[i] = 0;
	return (a);
}
