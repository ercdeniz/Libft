/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:58:26 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 01:19:42 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
// c bir alfanumerik karakter mi kontrol eder.
{
	if (ft_isalpha(c) || ft_isdigit(c))
		// tek tek aralıkları yazmak yerine hazır fonksiyonları kullanmak daha mantıklı.
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum(1));
}
