/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:07:32 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 01:20:20 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
// c bir ascii karakter mi kontrol eder.
{
	if ((c >= 0) && (c <= 127))
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isascii('1'));
}
