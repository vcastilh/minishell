/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:09:36 by guribeir          #+#    #+#             */
/*   Updated: 2022/10/04 00:25:07 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(void)
{
	char	*ptr;

	ptr = readline("coder@guribeir-workspace-d94d6476c-qfs67:~/mini");
	printf("The line you've written is: %s\n", ptr);
	free(ptr);
	return(0);
}