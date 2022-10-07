/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:13:00 by coder             #+#    #+#             */
/*   Updated: 2022/10/07 14:58:40 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(void)
{
	char	*prompt;
	struct sigaction	act;

	set_signals(&act);
	while (1)
	{
		prompt = set_prompt("minishell$");
		//if (prompt == NULL)
		//{
		//	ft_putchar_fd('\n', 1);
		//	return (1);
		//}	
	}
	free(prompt);
	return (0);
}
