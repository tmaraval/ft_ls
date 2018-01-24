/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrpl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaraval <tmaraval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 08:25:30 by tmaraval          #+#    #+#             */
/*   Updated: 2017/11/20 08:12:41 by tmaraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strrpl(char *s, char f, char r)
{
	int i;

	i = 0;
	while (s[i] && s[i] != f)
		i++;
	if (s[i] != '\0')
		s[i] = r;
}