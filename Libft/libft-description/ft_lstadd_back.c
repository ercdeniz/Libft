/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:31:37 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/17 15:01:56 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
// lst'nin sonuna new'i ekler.
{
	t_list *last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst); // düğümün sonuna gider.
	if (!last)
		*lst = new;
	else
		last->next = new; // düğümün sonuna new'i ekler.
}

int	main(void)
{
	t_list *head;
	t_list *new;

	head = ft_lstnew("head");
	new = ft_lstnew("new");
	ft_lstadd_back(&head, new);
	printf("%s\n", head->content);
	printf("%s\n", head->next->content);
	return (0);
}
