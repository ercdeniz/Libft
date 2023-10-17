/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:33:52 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/17 14:35:22 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
//s pointerı ile gösterilen bellek bloğunun ilk n baytını sıfırlar.
{
	ft_memset(s, 0, n);//ft_memset fonksiyonu ile aynı işi yapar.
}

int	main(void)
{
	char	str[20]= "Hello World!";

	ft_bzero(str, 5);
	printf("%s\n", str + 5);
	// direkt str yazdırılmaya çalışılırsa başta null olduğu için çıktı alamayız bundan dolayı str nin 5. elemanından itibaren yazdırıyoruz.
	return (0);
}
