/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:54:13 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/07 10:04:59 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	if (to_find == NULL || ft_strlen((char *)to_find) == 0)
		return ((char *)str);
	if (ft_strlen((char *)to_find) > len)
		return (NULL);
	while (i < len)
	{
		if (ft_strncmp((char *)&str[i], to_find,
				ft_strlen((char *)to_find)) == 0)
		{
			if (i + ft_strlen((char *)to_find) > len)
				return (NULL);
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
