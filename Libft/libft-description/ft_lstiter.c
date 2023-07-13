/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:36:57 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:05:30 by ercdeniz         ###   ########.fr       */
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
	char a[] = "ff";
	char b[] = "gg";
	char c[] = "yy";
	t_list	*liste = ft_lstnew(a);
	t_list	*tut;
	size_t	i;

	ft_lstadd_back(&liste, ft_lstnew(b));
	ft_lstadd_back(&liste, ft_lstnew(c));


	//eskisini yazdir
	printf("eski :\n");
	tut = liste;
	for (i = 49; i < 52; i++)
	{
		printf("%s - ",(tut -> content));
		tut = tut -> next;
	}

	ft_lstiter(liste, fa);
	//yenisini yazdir
	printf("\nyeni :\n");
	for (i = 49; i < 52; i++)
	{
		printf("%s - ",(liste -> content));
		liste = liste -> next;
	}
}
