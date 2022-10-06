/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:19:44 by guribeir          #+#    #+#             */
/*   Updated: 2022/10/05 18:18:21 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main(void)
{
	//char	**strs;

	//empty string:
	//strs = ft_split("", ' ');;
	
	//null string:
	//strs = NULL;
	
	//-n starting the string
	//strs = ft_split("echo -n Só bora -n lá então", ' ');

	//-n in the middle of the string
	//strs = ft_split("echo Só bora -n lá então", ' ');
	
	//-n in the middle of the string
	//strs = ft_split("echo 'a'", ' ');

	//echo(strs);
	//strsclear(strs);

	pwd();
	return (0);
}
