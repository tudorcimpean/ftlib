/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 21:56:04 by tcimpean          #+#    #+#             */
/*   Updated: 2015/10/28 22:31:02 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_isdigit(int c);

int ft_atoi(const char *str);

int main()
{
	int val;
	char str[20];

	strcpy(str, " - +  234    23");
	val = atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	strcpy(str, " - +   234    23");
	val = ft_atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	return(0);
}
