/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:14:43 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/17 14:42:22 by ercdeniz         ###   ########.fr       */
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
    if (c >= 'a' && c <= 'z')
        c -= 32;
    index=42;
    return (c);
}

int main()
{
    char *str = "Hello World!";
    char *new_str = ft_strmapi(str, &my_func);
    printf("%s\n", new_str);
    return (0);
}
