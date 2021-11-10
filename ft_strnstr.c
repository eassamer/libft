/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:54:13 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/09 09:08:30 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	found;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			found = 1;
			while (needle[j])
			{
				if (needle[j] != haystack[i + j] || i + j >= len)
					found = 0;
				j++;
			}
			if (found)
				return ((char *) haystack + i);
		}
		i++;
	}
	return (0);
}
