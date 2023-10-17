/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:29:13 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/17 15:07:08 by ercdeniz         ###   ########.fr       */
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
	t_list *head;
	t_list *new;

	head = ft_lstnew("head");
	new = ft_lstnew("new");
	ft_lstadd_back(&head, new);
	printf("%d\n", ft_lstsize(head));
	return (0);
}
