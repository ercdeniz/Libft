/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:12:00 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:49:24 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
// setteki karakterlerden başta ve sonda kaç tane varsa onları siler.
{
	char	*trimmed;
	size_t	i;
	size_t	str_len;
	size_t	tindex;

	if (!str || !set)
		return (NULL);
	i = 0;
	str_len = ft_strlen(str);
	while (str[i] && ft_strchr(set, str[i]))//baştan arar
		i++;//strnin i. indexi sette varsa i yi arttırır
	while (str_len > i && ft_strchr(set, str[str_len - 1]))//sondan arar
		str_len--;//strnin sonundan başlayarak sette varsa str_leni azaltır
	trimmed = (char *)malloc(sizeof(char) * (str_len - i + 1));//i ile str len arasındaki string kadar yer alınır
	if (!trimmed)
		return (NULL);
	tindex = 0;
	while (i < str_len)//i den str_lenin kaldığı yere kadar trimmed a kopyalar
		trimmed[tindex++] = str[i++];
	trimmed[tindex] = '\0';
	return (trimmed);
}

int main()
{
	char *s1 = "xzyxyHellozzzyxy";
	char *set = "xyz";
	printf("%s", ft_strtrim(s1, set));
	return (0);
}
