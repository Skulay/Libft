/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:45:03 by alehamad          #+#    #+#             */
/*   Updated: 2025/09/15 14:07:53 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (nmemb && (size > SIZE_MAX / nmemb))
		return (0);
	dst = malloc(nmemb * size);
	if (!dst)
		return (0);
	while (i < nmemb * size)
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}
