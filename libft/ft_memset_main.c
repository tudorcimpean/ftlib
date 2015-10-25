/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcimpean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 20:56:02 by tcimpean          #+#    #+#             */
/*   Updated: 2015/10/25 20:58:19 by tcimpean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len);

int main (void)
{
	char str[50];

	strcpy(str,"This is string.h library function");
	puts(str);

	ft_memset(str,'$',7);
	puts(str);

	return(0);
}
