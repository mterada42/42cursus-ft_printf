/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterada <mterada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:21:01 by mterada           #+#    #+#             */
/*   Updated: 2026/05/08 13:29:14 by mterada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dest, const void *str, size_t n)
{
	size_t				i;
	const unsigned char	*d;
	const unsigned char	*s;

	d = (const unsigned char *)dest;
	s = (const unsigned char *)str;
	i = 0;
	if (n == 0)
		return (0);
	while (d[i] == s[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)d[i] - (unsigned char)s[i]);
}
