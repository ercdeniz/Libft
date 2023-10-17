/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:35:49 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/17 14:36:27 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
// verilen srcyi dest'e n kadar  kopyalar.
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

int	main(void)
{
	char	*src = "Hello World!";
	char	*dst = malloc(sizeof(char) * 13);

	ft_memcpy(dst, src, 13);
	printf("%s\n", dst);
	free(dst);
	return (0);
}
