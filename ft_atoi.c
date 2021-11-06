/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:50:20 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/05 09:15:58 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
//some comment
int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	ret;

	i = 0;
	neg = 1;
	ret = 0;
	while (((9 <= str[i] && str[i] <= 13) || str[i] == 32) && str[i])
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i] == '-')
		{
			neg = neg * -1;
		}
		i++;
	}
	while (('0' <= str[i] && str[i] <= '9') && str[i])
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(ret * neg));
}
