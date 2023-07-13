/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:06:11 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/08 18:35:37 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	str_len;

	if (!str)
		return (NULL);
	str_len = ft_strlen(str);
	if (start >= str_len)
		return (ft_strdup(""));
	if (str_len - start < len)
		len = str_len - start;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, str + start, len);
	ptr[len] = '\0';
	return (ptr);
}
