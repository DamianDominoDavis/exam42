/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 16:17:46 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/12 23:44:44 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char   *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = -1;
	while (s2[++i])
		s1[i] = s2[i];
	s1[i] = s2[i];
	return (s1);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char	dst[20] = {0};
// 	char	*src = "copy this";
	
// 	ft_strcpy(dst, src);
// 	printf("%s\n", dst);
// 	return (0);
// }
