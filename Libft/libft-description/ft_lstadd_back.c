/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:31:37 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 01:23:43 by ercdeniz         ###   ########.fr       */
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
	t_list	*liste;
	t_list	*temp;

	liste = ft_lstnew((void *)49);
	for (size_t i = 50; i < 55; i++)
	{
		ft_lstadd_back(&liste, ft_lstnew((void *)i));
	}
	temp = ft_lstlast(liste);
	printf("%c", (char)(temp->content));
}
