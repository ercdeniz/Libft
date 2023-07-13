/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:29:13 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:17:41 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
// lst'nin düğüm sayısını döndürür.
{
	int i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst->next; // lst'nin son düğümüne gelene kadar ilerler.
		i++;// düğümleri sayarken i'yi arttırır bu sayede düğüm sayısı bulunur
	}
	return (i);
}

int	main(void)
{
	t_list	*liste;

	liste = ft_lstnew((void *)64);
	for (size_t i = 65; i < 70; i++)
	{
		ft_lstadd_front(&liste, ft_lstnew((void *)i));
	}
	printf("%d", ft_lstsize(liste));
}
