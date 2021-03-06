/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:03:21 by hstiv             #+#    #+#             */
/*   Updated: 2019/01/19 19:13:09 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void			ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list		*nxt;

	if (lst)
		while (lst)
		{
			nxt = lst->next;
			f(lst);
			lst = nxt;
		}
}
