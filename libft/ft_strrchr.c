/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 18:59:41 by hstiv             #+#    #+#             */
/*   Updated: 2019/01/19 19:02:52 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char				*ft_strrchr(const char *s, int c)
{
	int				i;

	i = ft_strlen(s);
	while (i && !(*(s + i) == (char)c))
		i--;
	if (*(s + i) == (char)c)
		return ((char *)s + i);
	return (NULL);
}
