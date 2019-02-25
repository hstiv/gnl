/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 18:52:10 by hstiv             #+#    #+#             */
/*   Updated: 2019/01/19 19:05:12 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char				*ft_strnew(size_t size)
{
	char			*str;

	str = (char *)malloc(size + 1);
	if (str == NULL)
		return (NULL);
	ft_memset(str, 0, size + 1);
	return (str);
}
