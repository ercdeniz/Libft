/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:13:52 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 01:21:17 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(int n)
// basamak sayısını bulur
{
	int len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
// sayıyı stringe çevirir
{
	char *ptr;
	int len;
	int sign;

	sign = 1;
	len = get_len(n);
	if (n < 0)
		sign = -1;
	ptr = (char *)malloc(len + 1);
		// sonuna null ekleyeceği için lenden bir fazla yer alır
	if (!ptr)
		return (NULL);
	ptr[len] = '\0'; // sonuna null ekler
	while (len--)
	{
		ptr[len] = (n % 10) * sign + '0'; // sonran başa doğru stringe yazar
		n /= 10;
	}
	if (sign == -1) // sayı negatifse başına - ekler
		ptr[0] = '-';
	return (ptr);
}
int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}

