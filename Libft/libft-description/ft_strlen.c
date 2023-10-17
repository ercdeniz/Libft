/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:06:59 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:44:01 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
// stringin uzunluğunu döndürür
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int main()
{
	char *s = "Hello";
	printf("%zu", ft_strlen(s));
	return (0);
}

