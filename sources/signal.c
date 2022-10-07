/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:57:34 by coder             #+#    #+#             */
/*   Updated: 2022/10/07 16:59:50 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	sig_handler(int	sig)
{
	if (sig == SIGINT)
	{
		ft_putchar_fd('\n', 1);
		rl_reset_line_state();
		rl_redisplay();
	}
}

void	set_signals(struct sigaction *act)
{
	act->sa_handler = &sig_handler;
	sigaction(SIGINT, act, NULL);
}
