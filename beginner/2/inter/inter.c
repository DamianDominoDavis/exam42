/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter_.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 00:07:27 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/13 00:10:16 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int c, char **v)
{
	char *left;
	char *right;

	if (c == 3) {
		left = v[1];
		while (*left) {
			right = v[2];
			while (*right && *right != *left)
				right++;
			if (*right)
				write(1, right, 1);
			left++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
