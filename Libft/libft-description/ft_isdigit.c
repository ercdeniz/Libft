/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:41:44 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 01:20:40 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
// c bir sayısal karakter mi kontrol eder.
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit(1));
	printf("%d\n", ft_isdigit('1'));
}
