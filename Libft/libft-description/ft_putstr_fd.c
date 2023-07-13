/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:16:26 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:32:01 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)// fd (file directory) ayrıca araştırılmalı
// stringi dosyaya yazar
{
	if (!str)
		return ;
	write(fd, str, ft_strlen(str));
}

int	main()
{
	char *s = "Hello";

	int fd = open("test.txt",O_RDWR | O_CREAT);
	ft_putstr_fd(s, fd);
	return (0);
}

