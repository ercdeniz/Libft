/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:10:48 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/16 17:20:56 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*concat;
	size_t	i;
	size_t	j;

	if (!str1 || !str2)
		return (NULL);
	concat = (char *)malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!concat)
		return (NULL);
	i = 0;
	j = 0;
	while (str1[i])
		concat[j++] = str1[i++];
	i = 0;
	while (str2[i])
		concat[j++] = str2[i++];
	concat[j] = '\0';
	return (concat);
}
