/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcirpici <tcirpici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:45:14 by tcirpici          #+#    #+#             */
/*   Updated: 2024/11/02 10:45:14 by tcirpici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dest;
	s = (const char *)src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	if (d < s)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		i = n;
		while (i--)
		{
			d[i] = s[i];
		}
	}
	return (d);
}
