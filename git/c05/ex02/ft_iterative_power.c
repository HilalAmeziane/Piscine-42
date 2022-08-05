/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamezian <hamezian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 03:05:08 by hamezian          #+#    #+#             */
/*   Updated: 2022/08/01 17:12:43 by hamezian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{	
	int	i;
	int	tot;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	i = 0;
	tot = 1;
	while (i < power)
	{
		tot *= nb;
		i++;
	}
	return (tot);
}
