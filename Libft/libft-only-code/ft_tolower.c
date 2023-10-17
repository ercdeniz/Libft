/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:49:44 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/16 17:23:21 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)

{
	if ((c >= 'A') && (c <= 'Z'))
		return (c + 32);
	return (c);
}
