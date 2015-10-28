/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 21:52:33 by tcimpean          #+#    #+#             */
/*   Updated: 2015/10/28 22:31:33 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);

int	ft_atoi(const char *str)
{
	int i;
	int semn;
	int nr;

	i = 0;
	nr = 0;
	while (str[i] != '\0' && str[i] == ' ')
		i++;
	if (ft_isdigit(str[i]) == 0 && str[i] != '-' && str[i] != '+')
		return (0);
	if (ft_isdigit(str[i]) == 1)
		semn = 1;
	else
	{
		if (str[i] == '+')
			semn = 1;
		else
			semn = -1;
		i++;
	}
	while (ft_isdigit(str[i]) != 0)
		nr = nr * 10 + str[i++] - '0';
	nr = nr * semn;
	return (nr);
}
