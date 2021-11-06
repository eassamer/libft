/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:42:37 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/05 09:26:16 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p1;

	p1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p1[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
