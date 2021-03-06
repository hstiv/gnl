/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 16:35:43 by hstiv             #+#    #+#             */
/*   Updated: 2019/05/08 14:08:38 by hstiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <unistd.h>
# include "libft/includes/libft.h"

# define BUFF_SIZE 20

int			get_next_line(const int fd, char **line);

#endif
