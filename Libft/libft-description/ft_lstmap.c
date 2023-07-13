/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:37:37 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:14:19 by ercdeniz         ###   ########.fr       */
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

void	sil(void *con)
{
	ft_bzero(con, sizeof(con));
}
void	*fa(void *content)
{
	content = content + 2;
	return (content);
}
int	main(void)
{
	t_list	*liste;
	t_list	*tut;
	size_t	i;

	liste = ft_lstnew((void *)49);
	for (i = 50; i < 55; i++)
	{
		ft_lstadd_back(&liste, ft_lstnew((void *)i));
	}
	tut = ft_lstmap(liste, fa, sil);
	printf("liste :\n");
	for (i = 49; i < 55; i++)
	{
		printf("%c - ", (char)(liste->content));
		liste = liste->next;
	}
	printf("\nsonuc :\n");
	for (i = 49; i < 55; i++)
	{
		printf("%c - ", (char)(tut->content));
		tut = tut->next;
	}
}
