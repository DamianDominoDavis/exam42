/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 16:21:39 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/13 00:20:53 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int c, char **v)
{
	char *ptr;

	if (c == 2)
	{
		ptr = v[1];
		while (*ptr)
			ptr++;
		ptr--;
		while (ptr >= v[1] && (*ptr == ' ' || *ptr == '\t'))
			ptr--;
		while (ptr >= v[1] && *ptr != ' ' && *ptr != '\t')
			ptr--;
		ptr++;
		while (*ptr && *ptr != ' ' && *ptr != '\t')
			write(1, ptr++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
