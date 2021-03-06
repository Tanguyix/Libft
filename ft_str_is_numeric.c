/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboissel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 13:41:40 by tboissel          #+#    #+#             */
/*   Updated: 2018/04/10 15:21:33 by tboissel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_numeric(const char *str)
{
	while (*str)
	{
		if (!(ft_isdigit(*str)))
			return (0);
		str++;
	}
	return (1);
}
