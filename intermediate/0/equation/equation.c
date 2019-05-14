/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 05:32:47 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/14 05:49:04 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	equation(int n) {
	int a, b, c;

	a = -1;
	while (++a < 10 && 11 * a <= n) {
		b = -1;
		while (++b < 10 && 11 * a + b <= n) {
			c = -1;
			while (++c < 10) {
				if (11 * a + b + 10 * c == n)
				printf("A = %d, B = %d, C = %d\n", a, b, c);
			}
		}
	}
}

/*
int main(void) {
	printf("%s\n", "n = 42");
	equation(42);
	printf("%s\n", "n = 111");
	equation(111);
	return (0);
}
*/
