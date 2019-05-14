/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pivot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 05:43:32 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/14 05:44:54 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_pivot(int *arr, int n) {
	int i, half, sum;

	i = sum = 0;
	while (i < n)
		sum += arr[i++];
	i = half = 0;
	while (i < n)
		if (2 * half + arr[i] == sum)
			return (i);
		else
			half += arr[i++];
	return (-1);
}

/*
#include <stdio.h>
void	pprint(int *arr, int n) {
	int i, pivot;

	pivot = find_pivot(arr, n);
	if (pivot >= 0)
		pivot = arr[pivot];
	i = 0;
	printf("arr = [ ");
	while (i < n-1)
		printf("%d, ", arr[i++]);
	printf("%d ], n = %d, pivot = %d\n", arr[i], n, pivot);
}

int		main(void) {
	pprint((int[]){1, 2, 3, 4, 0, 6}, 6);
	pprint((int[]){-5, 10, 2, 5}, 4);
	pprint((int[]){1, 100, 0, 0, 1}, 5);
	pprint((int[]){7, 9, 8}, 3);
	pprint((int[]){1 , 2}, 2);
	return (0);
}
*/
