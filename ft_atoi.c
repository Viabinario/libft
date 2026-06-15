/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 16:57:41 by francisa          #+#    #+#             */
/*   Updated: 2026/06/08 16:57:45 by francisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *npt)
{
	int	sign;
	int	i;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((npt[i] >= 9 && npt[i] <= 13) || npt[i] == 32)
		i++;
	if (npt[i] == '-')
	{
		sign = -sign;
		i++;
	}
	else if (npt[i] == '+')
		i++;
	while (npt[i] >= '0' && npt[i] <= '9')
	{
		result = result * 10 + (npt[i] - '0');
		i++;
	}
	result = sign * result;
	return (result);
}
