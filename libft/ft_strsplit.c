/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/17 22:05:06 by tcimpean          #+#    #+#             */
/*   Updated: 2015/11/24 22:56:26 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (s[0] != c)
		len++;
	while (s[i + 1] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			len++;
		i++;
	}
	return (len);
}

int		det_len(char const *s, char c, int poz)
{
	int	i;

	i = 0;
	while (s[poz] != c && s[poz] != '\0')
	{
		poz++;
		i++;
	}
	return (i);
}

char	**string_form(char **a, const char *s, char c, int v[2])
{
	int	k;
	int	t;

	while (s[v[0]] + 1 != '\0')
		if (s[v[0]] == c && s[v[0] + 1] != c && s[v[0] + 1] != '\0')
		{
			while (s[v[0]] == c)
				v[0]++;
			k = det_len(s, c, v[0]);
			a[v[1]] = (char *)malloc(sizeof(char) * k);
			t = 0;
			while (k > 0)
			{
				a[v[1]][t] = s[v[0]];
				v[0]++;
				k--;
				t++;
			}
			a[v[1]][t] = '\0';
			v[1]++;
		}
		else
			v[0]++;
	return (a);
}

char	**ft_strsplit(char const *s, char c)
{
	int		v[2];
	int		k;
	char	**a;

	v[0] = ft_len(s, c);
	if (s == 0)
		return (0);
	a = (char **)malloc(sizeof(char *) * v[0]);
	v[1] = 0;
	v[0] = 0;
	if (s[v[0]] != c)
	{
		k = det_len(s, c, 0);
		a[v[1]] = (char *)malloc(sizeof(char) * k);
		while (v[0] < k)
		{
			a[v[1]][v[0]] = s[v[0]];
			v[0]++;
		}
		a[v[1]][v[0]] = '\0';
		v[1]++;
	}
	a = string_form(a, s, c, v);
	return (a);
}
