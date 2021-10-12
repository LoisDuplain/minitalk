/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:52:57 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/13 15:33:30 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	is_valid_flag(char c)
{
	if (c == '-'
		|| c == '*'
		|| c == '.'
		|| c == '0')
		return (TRUE);
	return (FALSE);
}