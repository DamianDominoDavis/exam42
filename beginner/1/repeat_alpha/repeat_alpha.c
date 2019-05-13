/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 16:18:52 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/12 17:13:07 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		letter_count(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int		main(int c, char **v)
{
	int	repeat;

	if (c == 2)
	{
		while (*v[1])
		{
			repeat = letter_count(*v[1]);
			while (repeat--)
				write(1, v[1], 1);
			v[1]++;
		}
	}
	ft_putchar('\n');
}
