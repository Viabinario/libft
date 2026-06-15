/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 16:10:27 by francisa          #+#    #+#             */
/*   Updated: 2026/06/15 16:10:30 by francisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int num)
{
	int		i;
	long	n;

	i = 0;
	n = num;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i = 1;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*nptr;
	size_t	numlen;
	long	n_new;

	n_new = n;
	numlen = ft_numlen(n);
	nptr = malloc(numlen + 1);
	if (!nptr)
		return (NULL);
	nptr[numlen] = '\0';
	if (n_new == 0)
		nptr[0] = '0';
	if (n_new < 0)
	{
		nptr[0] = '-';
		n_new = -n_new;
	}
	while (n_new > 0)
	{
		numlen --;
		nptr[numlen] = (n_new % 10) + '0';
		n_new = n_new / 10;
	}
	return (nptr);
}
