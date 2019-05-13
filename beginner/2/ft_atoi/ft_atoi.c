/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 16:20:59 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/12 23:57:14 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *s)
{
	int		sign;
	long	r;

	r = 0;
	sign = 1;
	while (*s == ' ' || *s == '\f' || *s == '\n' || *s == '\r' || *s == '\t' || *s == '\v')
		s++;
	if (*s == '-' || *s == '+')
		sign = (*s++ == '-' ? -1 : 1);
	while (*s >= '0' && *s <= '9')
		r = r * 10 + *s++ - '0';
	return (sign * (int)r);
}

// int	main(void)
// {
// 	char *a = "    \n\n\v\f\r\t -5234AAAgreghrsth"; // -5234
	
// 	printf("%d\n", ft_atoi(a));
// }