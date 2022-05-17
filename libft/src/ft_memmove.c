/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juntakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:00:10 by juntakim          #+#    #+#             */
/*   Updated: 2022/03/24 20:34:11 by juntakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ndst;
	unsigned char	*nsrc;

	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	if (ndst == nsrc || n == 0)
		return (dst);
	i = -1;
	if (dst < src)
	{
		while (++i < n)
			ndst[i] = nsrc[i];
		return (dst);
	}
	else
	{
		while (++i < n)
			ndst[n - i - 1] = nsrc[n - i - 1];
		return (dst);
	}
}
