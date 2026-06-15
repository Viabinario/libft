/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 16:31:35 by francisa          #+#    #+#             */
/*   Updated: 2026/06/15 16:31:37 by francisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*nlst;
	t_list	*temp;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	current = lst;
	nlst = NULL;
	while (current)
	{
		new_content = f(current->content);
		temp = ft_lstnew(new_content);
		if (!temp)
		{
			del(new_content);
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, temp);
		current = current->next;
	}
	return (nlst);
}
