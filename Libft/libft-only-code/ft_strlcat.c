/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:47:06 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/08 18:38:08 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	dindex;
	size_t	sindex;

	if (destsize <= ft_strlen(dst))
		return (destsize + ft_strlen(src));
	dindex = ft_strlen(dst);
	sindex = 0;
	while (src[sindex] != '\0' && dindex + 1 < destsize)
		dst[dindex++] = src[sindex++];
	dst[dindex] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[sindex]));
}
