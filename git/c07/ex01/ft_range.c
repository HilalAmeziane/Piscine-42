/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamezian <hamezian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:32:53 by hamezian          #+#    #+#             */
/*   Updated: 2022/08/03 23:26:13 by hamezian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*tab_range;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if ((max - min) == 0)
		return (NULL);
	tab_range = malloc((max - min) * (sizeof(int) + 1));
	while (i < size)
	{
		tab_range[i] = min++;
		i++;
	}
	return (tab_range);
}
