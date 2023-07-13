/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:14:43 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:45:30 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
// stringe fonksiyon uygulayıp yeni bir string döndürür iteriden farkı return ve char olması
{
	char			*ptr;
	unsigned int	i;

	if (!str)
		return (NULL);
	ptr = (char *)malloc(ft_strlen(str) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ptr[i] = f(i, str[i]);
		++i;
	}
	ptr[i] = '\0';
	return (ptr);
}
char my_func(unsigned int index, char c)
{
    if (c >= 'a' && c <= 'z') // Küçük harfse büyük harfe dönüştür
    {
        return c - 32;
    }
    else
    {
        return c; // Diğer durumlarda karakteri olduğu gibi bırakır
    }
}

int main()
{
    const char *str = "Hello, World!";
    char *new_str = ft_strmapi(str, &my_func);
    if (new_str)
    {
        printf("Orijinal string: %s\n", str);
        printf("Yeni string: %s\n", new_str);
        free(new_str);
    }
    else
    {
        printf("Bellek ayrılamadı!\n");
    }

    return 0;
}
