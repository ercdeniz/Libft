/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:10:48 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:40:18 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
// iki stringi mallocla yer alıp birleştirir birleştirilen stringi döndürür.
{
	char	*concat;
	size_t	i;
	size_t	j;

	if (!str1 || !str2)
		return (NULL);
	concat = (char *)malloc(ft_strlen(str1) + ft_strlen(str2) + 1);//iki stringin uzunluğu kadar yer alır(+1 null için)
	if (!concat)
		return (NULL);
	i = 0;
	j = 0;
	while (str1[i])
		concat[j++] = str1[i++];
	i = 0;//ikinci stringin başından başlamak için i'yi sıfırlıyoruz.
	while (str2[i])// i stringlerin indexini, j concatin indexini tutuyor
		concat[j++] = str2[i++];
	concat[j] = '\0';
	return (concat);
}

int main()
{
	char *s1 = "Hello";
	char *s2 = "World";
	printf("%s", ft_strjoin(s1, s2));
	return (0);
}

