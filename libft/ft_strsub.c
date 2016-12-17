/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 20:21:39 by mfranc            #+#    #+#             */
/*   Updated: 2016/12/15 15:24:53 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t n)
{
	char				*new;
	static unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	new = ft_strnew(n);
	if (new == NULL)
		return (NULL);
	while (i < n)
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}
