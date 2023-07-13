/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:58:20 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:20:37 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
// str1 ve str2'yi n kadar karşılaştırır ve farklarını döndürür.
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr != *ptr2)
			return (*ptr - *ptr2);
		ptr++;
		ptr2++;
	}
	return (0);
}

int main()
{
	char str1[] = "Hello 42";
	char str2[] = "Hello World!";
	printf("%d\n", ft_memcmp(str1, str2, 12));
	return (0);
}
