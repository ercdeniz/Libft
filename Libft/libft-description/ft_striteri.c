/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:20:04 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:39:18 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
// stringe fonksiyon uygular mapiden farkı return olmaması ve void olması
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void convertToUpper(unsigned int index, char *c)
{
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - 'a' + 'A'; // Küçük harfi büyük harfe dönüştür
    }
}

int main()
{
    char str[] = "Hello, World!";
    printf("Orijinal string: %s\n", str);
    ft_striteri(str, &convertToUpper);
    printf("Dönüştürülen string: %s\n", str);

    return 0;
}
