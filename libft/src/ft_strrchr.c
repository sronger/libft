/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juntakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:49:32 by juntakim          #+#    #+#             */
/*   Updated: 2022/05/17 20:38:23 by juntakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*last;

	i = 0;
	last = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			last = &s[i];
		i++;
	}
	if (c == 0)
		return ((char *)&s[i]);
	return ((char *)last);
}
