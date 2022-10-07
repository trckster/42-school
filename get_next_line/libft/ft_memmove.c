/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkayleen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 22:00:09 by bkayleen          #+#    #+#             */
/*   Updated: 2019/09/20 21:50:42 by bkayleen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dst && !src)
		return (0);
	if (!len)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = d < s ? -1 : len - 1;
	if (d < s)
		while (++i < len)
			d[i] = s[i];
	else
		while (1)
		{
			d[i] = s[i];
			if (!i)
				break ;
			i--;
		}
	return (dst);
}
