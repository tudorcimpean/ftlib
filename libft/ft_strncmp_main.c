/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 22:46:17 by tcimpean          #+#    #+#             */
/*   Updated: 2015/10/28 23:02:22 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int main() {
	char string1[20];
	char string2[20];

	strcpy(string1, "abxdx");
	strcpy(string2, "abaaa");
	printf("Return Value is : %d\n", ft_strncmp( string1, string2, 4));

	strcpy(string1, "abxdx");
	strcpy(string2, "abaaa");
	printf("Return Value is : %d\n", strncmp( string1, string2, 4));

	return 0;
}
