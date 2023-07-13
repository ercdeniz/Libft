/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_touper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:48:38 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:56:59 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
// karakteri büyük harfe çevirir.
{
	if ((c >= 'a') && (c <= 'z'))
		return (c - 32);
	return (c);
}

int	main()
{
	char c = 'a';
	printf("%c", ft_toupper(c));
	return (0);
}
