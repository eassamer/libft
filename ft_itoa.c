/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:00:00 by eassamer          #+#    #+#             */
/*   Updated: 2021/11/06 11:33:47 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	num_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*str_convert(char *str, int result, int len)
{
	while (result > 0)
	{
		str[len--] = 48 + (result % 10);
		result = result / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		result;
	int		len;
	char	*nstr;

	sign = 1;
	len = num_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!nstr)
		return (NULL);
	nstr[len--] = '\0';
	if (len == 0)
		nstr[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		result = n * -1;
		nstr [0] = '-';
	}
	else
		result = n;
	nstr = str_convert(nstr, result, len);
	return (nstr);
}
