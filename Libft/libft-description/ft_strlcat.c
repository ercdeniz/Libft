/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:47:06 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:42:52 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
// destsize kadar destin sonuna src'yi ekler.
{
	size_t	dindex;
	size_t	sindex;

	if (destsize <= ft_strlen(dst))
		return (destsize + ft_strlen(src));// bu kısım man de böyle istediği için yazıldı.
	dindex = ft_strlen(dst);
	sindex = 0;
	while (src[sindex] != '\0' && dindex + 1 < destsize)
		dst[dindex++] = src[sindex++];
	dst[dindex] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[sindex]));
		// bu return dindexe eşit evet ama yine man de bu şekilde istediği için böyle yazıldı.
}

int	main(void)
{
	char		dst[20];
	const char	*src;
	size_t		destsize;
	size_t		result;

	dst[20] = "Hello, ";
	src = "World!";
	destsize = sizeof(dst) / sizeof(dst[0]);
	result = ft_strlcat(dst, src, destsize);
	printf("Concatenated string: %s\n", dst);
	printf("Resulting length: %zu\n", result);
	return (0);
}
