/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 07:26:30 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/14 07:46:53 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int c, char **v) {
	char alpha[26] = {0}, *p;
	int count[26] = {0}, i, spacing;

	if (c == 2) {
		p = v[1];
		while (*p) {
			if (*p >= 'A' && *p <= 'Z')
				*p += 'a' - 'A';
			if (*p >= 'a' && *p <= 'z') {
				i = 0;
				while (i < 26 && alpha[i] != *p)
					i++;
				count[i]++;
			}
			p++;
		}
		p = v[1];
		spacing = 0;
		while (*p) {
			if (*p >= 'a' && *p <= 'z') {
				i = 0;
				while (i < 26 && alpha[i] != *p)
					i++;
				if (count[i]) {
					printf("%s%d%1.1s", (spacing?", ":""), count[i], &alpha[i]);
					count[i] = 0;
					spacing = 1;
				}
			}
			p++;
		}
	}
	printf("%s", "\n");
	return (0);
}
