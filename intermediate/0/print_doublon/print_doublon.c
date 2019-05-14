/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 07:05:46 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/14 07:21:03 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    print_doublon(int *a, int na, int *b, int nb) {
	int ai, bi, spacing;

	ai = bi = spacing = 0;
	while (ai < na && bi < nb) {
		if (a[ai] < b[bi])
			ai++;
		else if (a[ai] > b[bi])
			bi++;
		else {
			printf("%s%d", (spacing? " ": ""), a[ai++]);
			bi++;
			spacing = 1;
		}
	}
	printf("%s", "\n");
}

/*
int	main(void) {
	int a[] = {-5, 2, 10, 15, 50, 70, 100, 200, 300, 1200, 5000},
		b[] = {2, 4, 5, 6, 7, 10, 40, 70};

	print_doublon(a, 11, b, 8);
	return (0);	
}
*/
