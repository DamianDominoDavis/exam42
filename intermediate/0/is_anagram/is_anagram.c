/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ok.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 06:11:11 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/14 06:13:46 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_anagram(char *a, char *b) {
	int txt[94] = {0};
	int i;

	while (*a)
		txt[*(a++) - 32]++;
	while (*b)
		txt[*(b++) - 32]--;
	i = -1;
	while (++i < 94)
		if (txt[i])
			return (0);
	return (1);
}

/*
#include <stdio.h>
int	main(int c, char **v) {
	if (c == 3) {
		printf("%s\n%s\n", v[1], v[2]);
		printf("%s\n", is_anagram(v[1], v[2])? "anagrams" : "not anagrams");
	}
}
*/
