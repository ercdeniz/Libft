/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:57:27 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:20:11 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
// stringe bakarak c karakterini arar ve bulursa o karakterin adresini döndürür.
{
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	while (n--)
		if (*ptr++ == (unsigned char)c)
			return (--ptr);
	return (NULL);
}

 int main()
{
	char str[] = "Hello World!";
	printf("%s\n", ft_memchr(str, 'W', 12));
	return (0);
}
