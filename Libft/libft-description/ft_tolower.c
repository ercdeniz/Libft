/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:49:44 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:50:45 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
// karakteri küçük harfe çevirir.
{
	if ((c >= 'A') && (c <= 'Z'))
		return (c + 32);
	return (c);
}

int	main()
{
	char c = 'A';
	printf("%c", ft_tolower(c));
	return (0);
}

