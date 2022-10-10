/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:32:32 by coder             #+#    #+#             */
/*   Updated: 2022/10/10 20:47:01 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	set_env(char *envp[])
{
	int		i;
	t_list	*env;
	
	i = 0;
	env = ft_lstnew(envp[i++]);
	while (envp[i] != NULL)
		ft_lstadd_back(&env, ft_lstnew(envp[i++]));
	while(env)
	{
		printf("%s\n", env->var);
		env = env->next;
	}
}
