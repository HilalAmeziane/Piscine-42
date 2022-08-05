/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamezian <hamezian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:23:47 by hamezian          #+#    #+#             */
/*   Updated: 2022/07/31 19:29:09 by hamezian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s2[i] == '\0')
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		else
			i++;
	}
	if (s2[i])
		return (-1);
	return (0);
}
