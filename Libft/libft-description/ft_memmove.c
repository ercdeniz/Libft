/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:42:01 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:23:08 by ercdeniz         ###   ########.fr       */
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
	char	str[15];

	str[15] = "Hello World!";
	printf("%s", ft_memmove(str + 6, str, 5));
}
