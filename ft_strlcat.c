/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 19:04:58 by francisa          #+#    #+#             */
/*   Updated: 2026/06/01 19:05:00 by francisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (dst[i] && i < dsize)
		i++;
	if (dsize <= i)
		return (i + ft_strlen(src));
	while (src[k] && k + i < dsize - 1)
	{
		dst[k + i] = src[k];
		k++;
	}
	dst[k + i] = '\0';
	return (i + ft_strlen(src));
}
