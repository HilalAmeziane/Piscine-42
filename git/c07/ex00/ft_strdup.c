/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamezian <hamezian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:36:26 by hamezian          #+#    #+#             */
/*   Updated: 2022/08/05 05:41:55 by hamezian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*copie;

	i = 0;
	copie = malloc(sizeof(copie) * ft_strlen(src)+1);
	while (src[i])
	{
		copie[i] = src[i];
		i++;
	}
	return (copie);
}
