/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:36:57 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/17 15:03:38 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
// lst'nin her elemanına f fonksiyonunu uygular.
{
	if (!lst || !f)
		return ;
	(*f)(lst->content);//lst'nin content'ine f fonksiyonunu uygular.
	ft_lstiter(lst->next, f);//recursive olarak devam eder.
}
void	fa(void *content)
{
	ft_memset(content, 'a', 0);
	ft_memset(content, 48, ft_strlen(content));
}
int	main(void)
{
	t_list *head;
	t_list *new;

	head = ft_lstnew("head");
	new = ft_lstnew("new");
	ft_lstadd_back(&head, new);
	ft_lstiter(head, fa);
	printf("%s\n", head->content);
	printf("%s\n", head->next->content);
	return (0);
}
