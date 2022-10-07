/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:35:19 by coder             #+#    #+#             */
/*   Updated: 2022/10/07 15:09:05 by coder            ###   ########.fr       */
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
