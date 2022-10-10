/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:35:19 by coder             #+#    #+#             */
/*   Updated: 2022/10/07 16:42:22 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*set_prompt(const char *name)
{
	char	*line;

	line = readline(name);
	if (!line)
		return (NULL);
	if (line && *line)
		add_history(line);
	return (line);
}
