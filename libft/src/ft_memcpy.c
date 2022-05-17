/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juntakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 19:44:57 by juntakim          #+#    #+#             */
/*   Updated: 2022/05/17 18:00:19 by juntakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ndst;
	unsigned char	*nsrc;

	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	i = 0;
	if (ndst == nsrc)
		return (dst);
	while (i < n)
	{
		ndst[i] = nsrc[i];
		i++;
	}
	return (dst);
}
