/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:15:49 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/17 15:02:15 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
// lst'nin başına new'i ekler.
{
	new->next = *lst; // new'in next adresi lst olur.
	*lst = new; // lst'in yeni adresi new olur.
}

int	main(void)
{
	t_list *head;
	t_list *new;

	head = ft_lstnew("head");
	new = ft_lstnew("new");
	ft_lstadd_front(&head, new);
	printf("%s\n", head->content);
	printf("%s\n", head->next->content);
	return (0);
}
