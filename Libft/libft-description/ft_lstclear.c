/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:36:23 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/17 15:02:34 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
// lst'nin tüm elemanlarını siler.
{
	t_list *tmp;

	if (!lst || !del)
		return ;
	tmp = *lst; // tmp'ye lst'nin adresini atar.
	while (tmp)
	{
		(*del)(tmp->content); // tmp'nin content'ini siler.
		tmp = tmp->next; // tmp'yi bir sonraki düğüme atar.
		free(*lst); // artık içi boş olan lst'nin ilk düğümünü siler.
		*lst = tmp; // tmp'yi lst'ye geri verir.
	}
}

void	ft_del(void *content)
// content'in içini null byte ile doldurur. yani siler
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
	ft_lstclear(&head, ft_del);
	printf("%s\n", head->content);
	printf("%s\n", head->next->content);
	return (0);
}
