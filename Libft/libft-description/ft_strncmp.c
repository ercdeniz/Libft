/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:56:24 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:46:17 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
// s1 ve s2'yi n kadar karşılaştırır ve farklarını döndürür.
{
	while (n--)
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		if (!*s1)
			return (0);
		s1++;
		s2++;
	}
	return (0);
}

int	main(void)
{
	char *s1 = "Nurcan";
	char *s2 = "Nurdan";
	printf("%d", ft_strncmp(s1, s2, 4));
	return (0);
}
