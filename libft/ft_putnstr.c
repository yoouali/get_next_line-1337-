/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 16:25:51 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/07 16:32:28 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr(char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}
