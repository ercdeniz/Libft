/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:37:37 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/17 15:33:01 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// lst'nin her elemanına f fonksiyonunu uygular ve yeni bir liste oluşturur.
{
	t_list *ret;
	t_list *tmp;
	void *content;

	if (!lst || !f)
		return (0);
	ret = 0;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			ft_lstclear(&ret, del); // content oluşturulamadıysa ret'i sil.
		if (!content)// 25 satırı geçmemesi için iki kere aynı if yazılıyor
			return (0);
		tmp = ft_lstnew(content);
			// content oluşturulduysa yeni bir düğüm oluştur.
		if (!tmp)
		{
			free(content); // tmp oluşturulamadıysa content'i sil.
			ft_lstclear(&ret, del); //	tmp oluşturulamadıysa ret'i sil.
			return (0);
		}
		ft_lstadd_back(&ret, tmp);
		lst = lst->next;
	}
	return (ret);
}

void	del(void *con)
{
	if (con)
		free(con);
}
void	*f(void *content)
{
	ft_strlen(content);
	return (content);
}
int main()
{
	t_list *head;
	t_list *new;
	t_list *res;

	head = ft_lstnew("first node");
	new = ft_lstnew("second node");
	ft_lstadd_back(&head, new);
	res = ft_lstmap(head, f, del);
	for(int i = 0; i < 2; i++)
	{
		printf("%s\n", res->content);
		res = res->next;
	}
	return (0);
}
