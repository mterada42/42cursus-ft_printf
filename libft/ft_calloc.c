/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterada <mterada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:42:01 by mterada           #+#    #+#             */
/*   Updated: 2026/05/08 13:52:45 by mterada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb, size_t size)
{
	char	*str;
	size_t	i;
	size_t	total;

	i = 0;
	if (nb != 0 && size > SIZE_MAX / nb)
		return (NULL);
	total = size * nb;
	str = malloc(total);
	if (str == 0)
		return (NULL);
	while (total > i)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
