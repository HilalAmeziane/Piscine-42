/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamezian <hamezian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:46:23 by hamezian          #+#    #+#             */
/*   Updated: 2022/08/03 12:31:13 by hamezian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
	write(1, "\n", 1);
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (i-- > 1 && ft_putstr(argv[i]))
		;
	return (0);
}
