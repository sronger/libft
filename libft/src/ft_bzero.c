/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juntakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 19:31:56 by juntakim          #+#    #+#             */
/*   Updated: 2022/03/24 19:59:07 by juntakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
	return (s);
}
