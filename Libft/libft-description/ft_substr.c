/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:06:11 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:50:11 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
/*verilen stringin start indexsinden itibaren len kadar kopyalar.eğer len
starttan sonra verilebilecek stringden büyükse len verilebilecek
max değere çekilir*/
{
	char	*ptr;
	size_t	str_len;

	if (!str)
		return (NULL);
	str_len = ft_strlen(str);
	if (start >= str_len)
		return (ft_strdup(""));//start verilen stringin uzunluğundan büyükse boş string döndürür.
	if (str_len - start < len)//starttan sonraki stringin uzunluğu len den küçükse leni verilebilecek max değere çeker.
		len = str_len - start;
	ptr = (char *)malloc(len + 1);//len kadar bellek ayırır.
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, str + start, len);//starttan itibaren len kadar kopyalar.
	ptr[len] = '\0';
	return (ptr);
}

int main()
{
	char *s = "Hello";
	printf("%s", ft_substr(s, 1, 2));
	return (0);
}
