/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbaich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:34:39 by adbaich           #+#    #+#             */
/*   Updated: 2021/11/03 20:48:08 by adbaich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*p;
	unsigned char	a;

	i = 0;
	p = (unsigned char *)s;
	a = (unsigned char)c;
	while (i < n)
	{	
		if (p[i] == a)
			return (p + i);
		i++;
	}
	return (0);
}
