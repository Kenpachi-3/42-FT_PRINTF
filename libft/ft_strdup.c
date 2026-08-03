/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:44:54 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/16 20:33:30 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*duplicate;

	len = ft_strlen(s);
	duplicate = (char *)malloc(len + 1);
	if (duplicate == NULL)
		return (NULL);
	ft_strlcpy(duplicate, s, len + 1);
	return (duplicate);
}
