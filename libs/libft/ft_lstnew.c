/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 14:28:57 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 17:38:35 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*set_key(char *cont)
{
	int		i;

	i = 0;
	while (cont[i])
	{
		if (cont[i] == '=')
			return (ft_substr(cont, 0, i));
		i++;
	}
	return(NULL);
}

char *set_value(char *cont)
{
	int		i;

	i = 0;
	while (cont[i])
	{
		if (cont[i] == '=')
			return (ft_substr(cont, i + 1, (ft_strlen(cont) - (i + 1))));
		i++;
	}
	return(NULL);
}

t_list	*ft_lstenv_new(void *content)
{
	t_list	*lst;
	char	*key;
	char	*value;

	lst = malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	key = set_key(content);
	value = set_value(content);
	lst->key = key;
	if (lst->key == NULL)
		return (NULL);
	lst->next = NULL;
	return (lst);
}
