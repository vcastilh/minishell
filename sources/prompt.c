/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:35:19 by coder             #+#    #+#             */
/*   Updated: 2022/10/07 14:59:00 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*set_prompt(const char *name)
{
	char	*line;

	line = readline(name);
	if (!line || !*line)
		return (NULL);
	add_history(line);
	return (line);
}
