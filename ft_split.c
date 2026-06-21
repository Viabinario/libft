/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francisa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 11:17:49 by francisa          #+#    #+#             */
/*   Updated: 2026/06/21 11:17:51 by francisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(char const *s, char c)
{
	int		flag;
	size_t	i;
	size_t	word;

	flag = 0;
	i = 0;
	word = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c)
		{
			if (flag == 0)
			{
				flag = 1;
				word++;
			}
		}
		else
			flag = 0;
		i++;
	}
	return (word);
}

static size_t	ft_count_letters(char const *s, char c, size_t i)
{
	size_t	count_letter;

	count_letter = 0;
	while (i < ft_strlen(s) && s[i] != c)
	{
		count_letter++;
		i++;
	}
	return (count_letter);
}

static char	*ft_genwords(char const *s, size_t start, size_t count_letter)
{
	size_t	j;
	char	*wptr;

	wptr = malloc (count_letter + 1);
	if (!wptr)
		return (NULL);
	j = 0;
	while (j < count_letter)
	{
		wptr[j] = s[j + start];
		j++;
	}
	wptr[j] = '\0';
	return (wptr);
}

static int	ft_putwords(char const *s, char c, char **sptr)
{
	size_t	i;
	size_t	start;
	size_t	count_letter;
	size_t	k;

	i = 0;
	k = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		start = i;
		count_letter = ft_count_letters(s, c, i);
		i = i + count_letter;
		if (count_letter > 0)
		{
			sptr[k] = ft_genwords(s, start, count_letter);
			if (!sptr[k])
				return (0);
			k++;
		}
	}
	sptr[k] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**sptr;
	size_t	i;

	if (!s)
		return (NULL);
	sptr = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!sptr)
		return (NULL);
	if (!ft_putwords(s, c, sptr))
	{
		i = 0;
		while (sptr[i])
		{
			free(sptr[i]);
			i++;
		}
		free(sptr);
		return (NULL);
	}
	return (sptr);
}
