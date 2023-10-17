/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:44:06 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:43:39 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// src den dste dstsize -1 kadar kopyalar ve src nin uzunluğunu döndürür
{
	size_t	index;

	if (!dst || !src)
		return (0);
	index = 0;
	if (dstsize > 0)
	{
		while (src[index] != '\0' && index < dstsize - 1)
		{
			dst[index] = src[index];
			++index;
		}
		dst[index] = '\0';
	}
	return (ft_strlen(src));
}

int main()
{
	char *src = "Hello World!";
	char dst[5];
	printf("fonksiyon sonucu: %zu\n", ft_strlcpy(dst, src, 5+1));
	printf("dest: %s\n", dst);
	printf("dest uzunluğu: %zu\n", ft_strlen(dst));

	return (0);
}
