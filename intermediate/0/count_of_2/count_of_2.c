/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_of_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 05:30:09 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/14 05:50:26 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_of_2(int n) {
	int x, copy, score;

	score = 0;
	x = 1;
	while (++x <= n) {
		copy = x;
		while (copy > 0) {
			if (copy % 10 == 2)
			  score++;
			copy /= 10;
		}
	}
	return (score);
}

/*
#include <stdio.h>
int main(void) {
	printf("scoring %d: %d\n", 25, count_of_2(25));
	return (0);
}
*/
