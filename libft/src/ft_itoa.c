/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juntakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:37:13 by juntakim          #+#    #+#             */
/*   Updated: 2022/05/17 20:43:29 by juntakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nb_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*string;
	long long	nb;

	len = ft_nb_len(n);
	nb = n;
	string = malloc(sizeof(char) * len + 1);
	if (!string)
		return (NULL);
	if (nb < 0)
	{
		string[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		string[0] = '0';
	string[len--] = '\0';
	while (nb)
	{
		string[len--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (string);
}
