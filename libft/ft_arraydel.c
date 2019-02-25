/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraydel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 14:29:41 by hstiv             #+#    #+#             */
/*   Updated: 2019/01/19 19:13:51 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_arraydel(void **array)
{
	if (array && *array)
		if (*(array + 1))
			ft_arraydel(array + 1);
	if (array)
		ft_memdel(&*array);
}