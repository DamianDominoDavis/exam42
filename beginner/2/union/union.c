/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 17:05:33 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/19 17:53:03 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int isogram(char *alpha, char *str) {
	int i, max = -1;

	while (*str) {
		i = 0;
		while (i < 128 && alpha[i] && alpha[i] != *str)
			i++;
		if (!alpha[i])
			alpha[i] = *str;
		else if (max < i)
			max = i;
		str++;
	}
	return (max + 1);
}

int main(int c, char **v) {
	int len = 128;
	char alpha[len];

	if (c == 3) {
		while (len--)
			alpha[len] = 0;
		isogram(alpha, v[1]);
		len = isogram(alpha, v[2]);
		if (len)
			write(1, alpha, len);
	}
	write(1, "\n", 1);
	return (0);
}
