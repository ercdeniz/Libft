/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:15:42 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/17 14:38:42 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)// fd (file directory) ayrıca araştırılmalı
// karakteri dosyaya yazar
{
	write(fd, &c, 1);
}
int	main(void)
{
	char c = 'a';
	int fd = open("test.txt", O_RDWR);
	ft_putchar_fd(c, fd);
	return (0);
}
