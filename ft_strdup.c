/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbaich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:06:16 by adbaich           #+#    #+#             */
/*   Updated: 2021/11/05 18:35:28 by adbaich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	s;

	s = ft_strlen(s1) + 1;
	p = malloc(s * sizeof(char));
	if (*p == NULL)
		return (NULL);
	ft_strlcpy(p, s1, s);
	return (p);
}
