/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 16:19:45 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/12 18:04:19 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		rot_13(char c)
{
	if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
		return (c + 13);
	if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
		return (c - 13);
	return (c);
}

int	main(int c, char **v)
{
	char	*ptr;
	if (c == 2) {
		ptr = v[1];
		while (*ptr)
			*ptr = rot_13(*ptr);
		write(1, v[1], ptr - v[1]);
	}
	write(1, "\n", 1);
	return (0);
}