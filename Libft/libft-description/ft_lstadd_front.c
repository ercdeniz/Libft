/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:15:49 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 01:24:36 by ercdeniz         ###   ########.fr       */
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
	t_list	*liste;

	for (size_t i = 65; i < 70; i++)
	{
		ft_lstadd_front(&liste, ft_lstnew((void *)i));
	}
	printf("%c", (char)(liste->content));
}
