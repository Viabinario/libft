/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 18:56:52 by francisa          #+#    #+#             */
/*   Updated: 2026/06/01 18:56:54 by francisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*v_dest;
	const unsigned char	*v_src;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	v_dest = (unsigned char *)dest;
	v_src = (unsigned char *)src;
	if (v_dest > v_src)
	{
		while (n--)
			v_dest[n] = v_src[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			v_dest[i] = v_src[i];
			i++;
		}
	}
	return (dest);
}
