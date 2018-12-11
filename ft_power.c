/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 17:59:43 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/12/08 18:00:43 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int base, int power)
{
	int		i;
	int		number;

	number = 1;
	i = 0;
	while (i < power)
	{
		number *= base;
		i++;
	}
	return (number);
}
