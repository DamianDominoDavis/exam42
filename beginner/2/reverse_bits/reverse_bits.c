/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 00:24:52 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/19 16:14:45 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char c)
{
	unsigned char	out = 0;
	unsigned		bits = 8;

	while (bits--)
	{
		out = (out << 1) | (c & 1);
		c >>= 1;
	}
	return (out);
}

/*
#include <unistd.h>
void brint(char c)
{
	int mask = 1;
	write(1, &c, 1);
	write(1, " = ", 3);
	while (mask <= 128) {
		if (mask == 16)
			write(1, " ", 1);
		write(1, c & mask ? "1" : "0", 1);
		mask <<= 1;
	}
	write(1, "\n", 1);
}

int main(void)
{
	brint('~');
	brint(swap_bits('~'));
	return (0);
}
*/
