/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 17:25:43 by francisa          #+#    #+#             */
/*   Updated: 2026/06/08 17:25:51 by francisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cmp(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_ns1cpy(char *ns1, char const *s1, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (i + start <= end)
	{
		ns1[i] = s1[i + start];
		i++;
	}
	ns1[i] = '\0';
	return (ns1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ns1;
	char	*r;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	if (ft_strlen(s1) == 0)
		return (ft_calloc(1, 1));
	while (ft_cmp(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (ft_cmp(s1[end], set) && end >= start)
		end--;
	ns1 = malloc(end - start + 2);
	if (!ns1)
		return (NULL);
	r = ft_ns1cpy (ns1, s1, start, end);
	return (r);
}
