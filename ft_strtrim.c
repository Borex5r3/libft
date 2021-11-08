/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbaich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:43:35 by adbaich           #+#    #+#             */
/*   Updated: 2021/11/08 11:49:09 by adbaich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	check(char const	s1, char const	*set)
{
	int	i;

	i = 0;
	while (*(set + i))
	{
		if (*(set + i) == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t len;
	size_t	il;
	size_t	is;
	char	*p;
	int		i;

	len = 0;
	while (check(s1[len], set))
		len++;
	is = len;
	len = ft_strlen(s1) - 1;
	while (check(s1[len], set) && len > 0)
		len--;
	il = len;
	len = il - is + 1;
	p = malloc(sizeof(char) * (len + 1));
	if(!p)
		return (NULL);
	i = 0;
	while (*(s1 + is) && is <= il)
		*(p + i++) = *(s1 + is++);
	*(p + i) = '\0';
	return (p);
}

int	main()
{
	printf("%s", ft_strtrim("    ", " "));
}
