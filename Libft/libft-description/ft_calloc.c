/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:01:18 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 01:18:11 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
// count * size kadar bellek ayırır ve 0 ile doldurur.
{
	void *ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	// bzeroda olduğu gibi memset ile de yapılabilir.
	return (ptr);
}

int	main(void)
{
	char	*str;

	str = ft_calloc(10, sizeof(char));
	printf("%s\n", str);
	// calloc null atar null yazdırılamadığı için sadece newline basar.
	return (0);
}
