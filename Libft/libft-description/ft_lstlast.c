/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:30:32 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/07/12 03:10:31 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
// lst'nin son düğümünü döndürür.
{
	if (!lst)
		return (0);
	while (lst->next) // lst'nin son düğümüne gelene kadar ilerler.
		lst = lst->next;
			// normal bir fonksiyonda i++ yapmak gibi lst'nin düğümlerini gezer.
	return (lst);
}
int	main(void)
{
	t_list	*liste;

	liste = ft_lstnew((void *)64);
	for (size_t i = 65; i < 70; i++)
	{
		ft_lstadd_front(&liste, ft_lstnew((void *)i));
	}
	printf("%d", ft_lstsize(liste));
}
