/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:54:17 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:48:46 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
// s içinde c yi sondan başlayarak arar bulursa o karakterin adresini döndürür.(o karakterden sonrasını döndürür)
{
	int	index;

	index = ft_strlen(s);
	while (index >= 0)
	{
		if (s[index] == (char)c)
			return ((char *)(s + index));
		--index;
	}
	return (0);
}

int	main()
{
	char *s = "Hello";
	char c = 'l';
	printf("%s", ft_strrchr(s, c));
	return (0);
}

