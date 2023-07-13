/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:32:09 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 01:30:15 by ercdeniz         ###   ########.fr       */
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
void	ft_del(void *content)
// content'in içini null byte ile doldurur. yani siler
{
	ft_bzero(content, sizeof(content));
}
int	main(void)
{
	char	l[15];
	char	s0[15];
	char	s1[15];
	char	s2[15];
	t_list	*lst;
	t_list	*student0;
	t_list	*student1;
	t_list	*student2;

	l[15] = "start";
	s0[15] = "student0";
	s1[15] = "student1";
	s2[15] = "student2";
	lst = ft_lstnew(l);
	student0 = ft_lstnew(s0);
	student1 = ft_lstnew(s1);
	student2 = ft_lstnew(s2);
	ft_lstadd_back(&lst, student0);
	ft_lstadd_back(&lst, student1);
	ft_lstadd_back(&lst, student2);
	ft_lstdelone(student1, ft_del);
	while (lst)
	{
		printf("%s \n", (char *)lst->content);
		lst = lst->next;
	}
}
