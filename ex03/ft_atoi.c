/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 10:23:59 by aboulhaj          #+#    #+#             */
/*   Updated: 2021/07/12 17:33:25 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_space(char c)
{
	return ((c >= 9 && c <= 13) || (c == 32));
}

bool	ft_sign(char c)
{
	return ((c == '+') || (c == '-'));
}

bool	ft_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	k;

	i = 0;
	n = 1;
	k = 0;
	while (ft_space(str[i]))
	{
		i++;
	}
	while (ft_sign(str[i]))
	{
		if (str[i] == '-')
			n = n * -1;
		i++;
	}
	while (ft_num(str[i]))
	{
		k = (str[i] - '0') + (k * 10);
		i++;
	}
	return (k * n);
}
