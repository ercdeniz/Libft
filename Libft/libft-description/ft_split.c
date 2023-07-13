/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:12:58 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:35:15 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
// stringdeki kelime sayısını bulur
{
	unsigned int	index;

	index = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s != c && *s)
				s++;
			index++;
		}
	}
	return (index);
}

static int	ft_wordlen(char const *s, char c)
// stringdeki kelimenin uzunluğunu bulur
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!s[i])
		return (0);
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	**ft_free(char **str, int i)
// malloc ile ayrılan belleği geri verir
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
// stringi c karakterine göre ayırır
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));//malloc ile kelime sayısı kadar bellek ayırır
	if (!s || !str)
		return (NULL);
	while (i < ft_wordcount(s, c))//kelime sayısı kadar döngüye girer
	{
		while (s[j] && s[j] == c)
			j++;
		str[i] = ft_substr(s, j, ft_wordlen(&s[j], c));//kelimenin uzunluğu kadar bellek ayırır
		if (!str[i])
			return (ft_free(str, i));
		j += ft_wordlen(&s[j], c);//kelimenin uzunluğu kadar ilerler
		i++;
	}
	str[i] = NULL;
	return (str);
}

int main()
{
	char **str;
	int i;

	str = ft_split("lorem ipsum dolor sit amet, consecte. spendisse", ' ');
	i = 0;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}
