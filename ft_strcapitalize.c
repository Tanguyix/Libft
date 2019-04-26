/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboissel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 09:25:22 by tboissel          #+#    #+#             */
/*   Updated: 2018/04/10 15:58:35 by tboissel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i])
	{
		if (!(ft_isalnum(str[i])) || i == 0)
		{
			if (i == 0)
				str[i] = ft_toupper(str[i]);
			else
				str[i + 1] = ft_toupper(str[i + 1]);
		}
		i++;
	}
	return (str);
}
