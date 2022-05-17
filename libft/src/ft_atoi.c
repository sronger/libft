/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juntakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:08:46 by juntakim          #+#    #+#             */
/*   Updated: 2022/05/17 20:08:08 by juntakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (check_isspace(nptr[i]) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + nptr[i] - 48;
		i++;
		if (sign == -1 && num == 214748364 && nptr[i] == '8')
			return (-2147483648);
	}
	return (sign * num);
}
