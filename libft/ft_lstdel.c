/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:09:31 by hstiv             #+#    #+#             */
/*   Updated: 2019/01/19 19:12:49 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*nxt;

	if (alst && *alst && del)
	{
		while (*alst)
		{
			nxt = (*alst)->next;
			ft_lstdelone(alst, del);
			*alst = nxt;
		}
	}
	*alst = NULL;
}
