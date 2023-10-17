/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:20:04 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/17 14:41:28 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
// stringe fonksiyon uygular mapiden farkı return olmaması ve void olması
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	convertToUpper(unsigned int index, char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
    index=42;
}

int	main(void)
{
    char *str = "Hello World!";
    ft_striteri(str, &convertToUpper);
    printf("%s\n", str);
    return (0);
}
