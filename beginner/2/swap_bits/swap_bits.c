/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 16:22:10 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/13 00:42:19 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char swap_bits(unsigned char c)
{
	return ((c << 4) | (c >> 4));
}

// #include <unistd.h>
// void brint(char c)
// {
// 	int mask = 1;
// 	write(1, &c, 1);
// 	write(1, " = ", 3);
// 	while (mask <= 128) {
// 		if (mask == 16)
// 			write(1, " ", 1);
// 		write(1, c & mask ? "1" : "0", 1);
// 		mask <<= 1;
// 	}
// 	write(1, "\n", 1);
// }

// int main(void)
// {
// 	char oct = '~';
// 	char swp = swap_bits(oct);
// 	brint(oct);
// 	brint(swp);
// }
