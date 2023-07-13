/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:14:43 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/08 18:37:31 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	if (!str)
		return (NULL);
	ptr = (char *)malloc(ft_strlen(str) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ptr[i] = f(i, str[i]);
		++i;
	}
	ptr[i] = '\0';
	return (ptr);
}
