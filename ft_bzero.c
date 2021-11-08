/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbaich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:32:17 by adbaich           #+#    #+#             */
/*   Updated: 2021/11/03 20:44:09 by adbaich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *) s;
	if (n == 0)
		return ;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
