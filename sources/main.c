/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:13:00 by coder             #+#    #+#             */
/*   Updated: 2022/10/07 16:47:10 by guribeir         ###   ########.fr       */
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
		free(prompt);
		if (!prompt)
		{
			free(prompt);
			write(1, "\n", 1);
			exit(127);
		}
	}
	free(prompt);
	return (0);
}
