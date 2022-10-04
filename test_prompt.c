/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_prompt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:19:04 by coder             #+#    #+#             */
/*   Updated: 2022/10/04 20:42:09 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
MU_TEST_SUITE(check_pwd_string, char *envp[])
{
	// Arrange
	char	*result;
	char	*expected_result = "/home/coder/Documents/42/phase2/minishell";

	result = ft_getenv("PWD", envp);
}

MU_TEST_SUITE(test_suite, char *envp[])
{
	MU_RUN_TEST(check_pwd_string, envp);
}

int main(int argc, char *argv[], char *envp[])
{
	MU_RUN_SUITE(test_suite, envp);
	MU_REPORT();
	return MU_EXIT_CODE;
}
