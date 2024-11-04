/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruwang <ruwang@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:47:23 by ruwang            #+#    #+#             */
/*   Updated: 2024/07/17 19:04:51 by ruwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_print_type(const char *input, void *arg)
{
	int	i;
	
	i = 0;
	if (*input == 'c')
		i += 
}

void	ft_input_length(char c, int *length)
{
	write(1, &c, 1);
	(*length)++;
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int	i;
	int	length;

	i = 0;
	va_start(args, input);
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
			ft_print_type(input[i], &args, &length, &i);

		}
		else
		{
			
		}
	}
	va_end(args);
	return 
}
