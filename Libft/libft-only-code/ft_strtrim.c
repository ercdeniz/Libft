/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:12:00 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/08 18:36:07 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	str_len;
	size_t	tindex;

	if (!str || !set)
		return (NULL);
	i = 0;
	str_len = ft_strlen(str);
	while (str[i] && ft_strchr(set, str[i]))
		i++;
	while (str_len > i && ft_strchr(set, str[str_len - 1]))
		str_len--;
	trimmed = (char *)malloc(sizeof(char) * (str_len - i + 1));
	if (!trimmed)
		return (NULL);
	tindex = 0;
	while (i < str_len)
		trimmed[tindex++] = str[i++];
	trimmed[tindex] = '\0';
	return (trimmed);
}
