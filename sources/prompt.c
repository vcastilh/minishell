/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:09:36 by guribeir          #+#    #+#             */
/*   Updated: 2022/10/04 20:57:45 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

//int	main(void)
//{
//	char	*ptr;
//	int		fd;
//	int		check;
//
//	fd = open("text.txt", O_RDONLY, 0644);
//	check = dup2(0, fd);
//	printf("%i", check);
//	while(1)
//	{
//		ptr = readline("$");
//		if (!ptr)
//			break ;
//		printf("The line you've written is: %s\n", ptr);
//	}
//	free(ptr);
//	return(0);
//}

char	*ft_getenv(char *name, char **envp)
{
	int	i;
	int	j;

	if ((name == NULL) | (envp == NULL))
		return (NULL);
	i = 0;
	j = 0;
	while (envp[i])
	{
		if (!ft_strncmp(name, envp[i], ft_strlen(name)))
		{
			j = i + ft_strlen(name) + 1;
			return (&(envp[i][j]));
		}
		else
			i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*ptr;
	int		fd;
	int		check;

	while(1)
	{
		ptr = readline(getenv("PWD"));
		if (!ptr)
			break ;
	}
	free(ptr);
	return(0);
}
