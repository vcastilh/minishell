/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:09:36 by guribeir          #+#    #+#             */
/*   Updated: 2022/10/04 01:03:20 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(void)
{
	char	*ptr;
	int		fd;
	int		check;

	fd = open("text.txt", O_RDONLY, 0644);
	check = dup2(0, fd);
	printf("%i", check);
	while(1)
	{
		ptr = readline("$");
		if (!ptr)
			break ;
		printf("The line you've written is: %s\n", ptr);
	}
	free(ptr);
	return(0);
}