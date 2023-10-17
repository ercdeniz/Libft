/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:30:32 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/17 15:03:56 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
// lst'nin son düğümünü döndürür.
{
	if (!lst)
		return (0);
	while (lst->next) // lst'nin son düğümüne gelene kadar ilerler.
		lst = lst->next;
			// normal bir fonksiyonda i++ yapmak gibi lst'nin düğümlerini gezer.
	return (lst);
}
int	main(void)
{
	t_list *head;
	t_list *new;

	head = ft_lstnew("head");
	new = ft_lstnew("new");
	ft_lstadd_back(&head, new);
	printf("%s\n", ft_lstlast(head)->content);
	return (0);
}
