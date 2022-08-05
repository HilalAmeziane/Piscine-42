/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamezian <hamezian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 21:40:31 by hamezian          #+#    #+#             */
/*   Updated: 2022/08/02 23:17:00 by hamezian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	tot;
	int	i;

	i = 1;
	tot = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		tot *= i;
		i++;
	}
	return (tot);
}
