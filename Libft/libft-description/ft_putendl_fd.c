/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:17:20 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:28:11 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)//fd (file descriptor) ayrıca araştırılmalı
// stringi dosyaya yazar ve alt satıra geçer
{
	if (!str)
		return ;
	write(fd, str, ft_strlen(str));
	write(fd, "\n", 1);
}

int	main()
{
	char *s = "Hello";
	char *s1 = "42";

	int fd = open("test.txt",O_RDWR | O_CREAT);
	ft_putendl_fd(s, fd);
	ft_putstr_fd(s1, fd);
	return (0);
}

