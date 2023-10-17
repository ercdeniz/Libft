/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:04:13 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:38:21 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
//verilen stringe malloc ile bellek ayırıp başka bir stringe kopyalayıp döndürür.
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, len + 1);
	return (ptr);
}

int main()
{
	char *s = "Hello";
	printf("%s", ft_strdup(s));
	return (0);
}
