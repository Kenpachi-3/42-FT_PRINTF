/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 16:59:56 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/16 20:38:42 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subbie;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		subbie = malloc(1);
		if (!subbie)
			return (NULL);
		return (subbie[0] = '\0', subbie);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	subbie = malloc(len + 1);
	if (!subbie)
		return (NULL);
	i = -1;
	while (++i < len)
		subbie[i] = s[start + i];
	subbie[i] = '\0';
	return (subbie);
}
