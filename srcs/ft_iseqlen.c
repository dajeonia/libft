/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iseqlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:08:07 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/16 20:34:18 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iseqlen(char const *s, char c, int not)
{
	int	len;
	int	true;

	len = 0;
	true = !not;
	while (*s)
	{
		if (ft_iseq(*s, c) == true)
		{
			s++;
			len++;
		}
		else
			break ;
	}
	return (len);
}
