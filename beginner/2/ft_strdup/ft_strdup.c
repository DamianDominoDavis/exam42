/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 16:21:18 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/19 16:15:50 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s;
	int		len;

	len = 0;
	while (src[len])
		len++;
	if (!(s = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s[len] = '\0';
	while (len-- >= 0)
		s[len] = src[len];
	return (s);
}

/*
#include <stdio.h>
int main(void) {
	char *str = "dup this";
	char *copy = ft_strdup(str);

	printf("%s\n", copy);
	free(copy);
	return (0);
}
/*
