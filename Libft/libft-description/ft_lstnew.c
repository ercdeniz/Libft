/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ercdeniz <ercdeniz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:07:17 by ercdeniz          #+#    #+#             */
/*   Updated: 2023/10/17 15:06:56 by ercdeniz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
// yeni bir düğüm oluşturur.
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list)); //* yeni düğüme yer açar
	if (!new)
		return (0);
	new->content = content;//* yeni düğümün content'ine parametreden gelen content'i atar
	new->next = 0; //* yeni düğümün next'ine NULL atar
	return (new);
}

int	main(void)
{
	t_list *new;

	new = ft_lstnew("new");
	printf("%s\n", new->content);
	return (0);
}
