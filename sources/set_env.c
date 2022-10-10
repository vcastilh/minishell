/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:32:32 by coder             #+#    #+#             */
/*   Updated: 2022/10/10 23:40:10 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_list	*set_env(char *envp[])
{
	int		i;
	t_list	*env;
	
	i = 0;
	env = ft_lstnew(envp[i++]);
	while (envp[i] != NULL)
		ft_lstadd_back(&env, ft_lstnew(envp[i++]));
	return (env);
}
