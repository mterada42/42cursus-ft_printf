/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterada <mterada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:23:20 by mterada           #+#    #+#             */
/*   Updated: 2026/05/07 17:37:19 by mterada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nb)
{
	int		sign;
	long	nbr;

	sign = 1;
	nbr = 0;
	while (('\t' <= *nb && *nb <= '\r') || *nb == ' ')
		nb++;
	if (*nb == '+' || *nb == '-')
	{
		if (*nb == '-')
			sign = sign * -1;
		nb++;
	}
	while ('0' <= *nb && *nb <= '9')
	{
		nbr = nbr * 10 + *nb - '0';
		nb++;
	}
	nbr = nbr * sign;
	return ((int)nbr);
}
