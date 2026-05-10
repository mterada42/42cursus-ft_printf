/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterada <mterada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:11:54 by mterada           #+#    #+#             */
/*   Updated: 2026/05/06 11:14:12 by mterada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	destlength;
	size_t	srclength;
	size_t	j;

	destlength = 0;
	srclength = 0;
	j = 0;
	while (destlength < dstsize && dst[destlength])
		destlength++;
	while (src[srclength])
		srclength++;
	if (dstsize <= destlength)
		return (dstsize + srclength);
	while (dstsize - 1 > destlength + j && src[j] != '\0')
	{
		dst[destlength + j] = src[j];
		j++;
	}
	dst[destlength + j] = '\0';
	return (destlength + srclength);
}
