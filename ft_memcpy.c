/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wqarro-v <wqarro-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:43:23 by wqarro-v          #+#    #+#             */
/*   Updated: 2018/12/09 20:14:31 by wqarro-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *str, size_t len)
{
	unsigned char	*buff;
	unsigned char	*src;

	buff = (unsigned char *)dest;
	src = (unsigned char *)str;
	while (len--)
		*buff++ = *src++;
	return (dest);
}
