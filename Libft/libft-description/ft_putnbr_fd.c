/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:18:06 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:31:50 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)// fd (file directory) ayrıca araştırılmalı
// sayıyı dosyaya yazar
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);// recursive fonksiyon kullanıyor (kendini çağırıyor)
	c = n % 10 + '0';
	write(fd, &c, 1);
}
int	main()
{
	int fd = open("test.txt",O_RDWR | O_CREAT);
	ft_putnbr_fd(2147483647, fd);
	return (0);
}
