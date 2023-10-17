/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:59:13 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:47:53 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
//haystack içinde needleı arar ve bulursa karakterin adresini döndürür
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < n)//haystack i baştan sona n kadar tarar
	{
		j = 0;
		while (haystack[i + j] && needle[j] && haystack[i + j] == needle[j] && i + j < n)
			j++;
		//haystack içinde needle ı arıyor i haysstackın j ise needle ın indexini tutar
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

int main()
{
	char *haystack = "Hello World";
	char *needle = "W";
	printf("%s", ft_strnstr(haystack, needle, 11));
	return (0);
}

