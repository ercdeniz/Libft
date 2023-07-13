/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:50:58 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:36:21 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
// s'in içinde c karakterini baştan başlayarak arar ve bulursa o karakterin adresini döndürür.(o karaketerden sonrasını döndürür)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		++s;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

int	main()
{
	char *s = "Hello";
	char c = 'l';
	printf("%s", ft_strchr(s, c));
	return (0);
}

