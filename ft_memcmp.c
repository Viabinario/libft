/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 17:04:37 by francisa          #+#    #+#             */
/*   Updated: 2026/06/08 17:04:39 by francisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	int				r;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	r = 0;
	while (i < n)
	{
		r = str1[i] - str2[i];
		if (r)
			return (r);
		i++;
	}
	return (0);
}
