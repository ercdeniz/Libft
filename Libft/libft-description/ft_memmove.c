/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:42:01 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/17 14:36:44 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
// verilen srcyi dest'e len kadar, src daha küçük olursa sondan kopyalar dst küçükse basindan kopyalar.
{
	unsigned char *d;
	unsigned char *s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s < d)// src daha küçükse sondan kopyala
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	else
		while (len--)// src daha büyükse basindan kopyala
			*d++ = *s++;
	return (dst);
}

int	main(void)
{
	char	*src = "Hello World!";
	char	*dst = malloc(sizeof(char) * 13);

	ft_memmove(dst, src, 13);
	printf("%s\n", dst);
	free(dst);
	return (0);
}
