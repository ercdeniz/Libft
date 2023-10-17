/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:32:09 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/17 15:03:04 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
// lst'nin bir content'ini siler.
{
	if (!lst || !del)
		return ;
	(*del)(lst->content); // lst'nin content'ine del fonksiyonunu uygular.
	free(lst);
}
void	ft_del(void *content)// content'in içini null byte ile doldurur. yani siler
{
	ft_bzero(content, sizeof(content));
}
int	main(void)
{
	t_list *head;
	t_list *new;

	head = ft_lstnew("head");
	new = ft_lstnew("new");
	ft_lstadd_back(&head, new);
	ft_lstdelone(head, ft_del);
	printf("%s\n", head->content);
	printf("%s\n", head->next->content);
	return (0);
}
