/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbaich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:35:18 by adbaich           #+#    #+#             */
/*   Updated: 2021/11/03 20:49:00 by adbaich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*p;
	char	*m;

	i = 0;
	p = (char *)dest;
	m = (char *)src;
	while (i < n)
	{
		p[i] = m[i];
		i++;
	}
	return (dest);
}
