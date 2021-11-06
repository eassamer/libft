/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:09:34 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/05 10:13:20 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*(char *)str)
	{
		if (*(char *)str == (char)c)
			return ((char *) str);
		str++;
	}
	if (c == 0)
	{
		return ((char *)str);
	}
	return (NULL);
}
