/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:13:00 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 17:36:55 by guribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "../minunit/minunit.h"

//int	main(int argc, char *argv[], char *envp[])
//{
//	char				*prompt;
//	struct sigaction	act;
//	struct sigaction	act_2;
//	t_list				*env;
//
//	if (argc == 0 || !argv[0])
//		return (1);
//	set_signals(&act, &act_2);
//	env = set_env(envp);
//	while (1)
//	{
//		prompt = set_prompt("minishell$");
//		free(prompt);
//		if (!prompt)
//		{
//			free(prompt);
//			write(1, "\n", 1);
//			exit(127);
//		}
//	}
//	free(prompt);
//}

MU_TEST_SUITE(send_string_double_equal_expect_sexta)
{
	//Arrange: variaveis usadas pro teste
	char	*expected;
	char	*result;

	//Act: ação do teste
	
	expected = ft_strdup("SEXTA");
	result = set_key("SEXTA==sofrencia");	

	//Assert: comparação do teste
	mu_assert_string_eq(expected, result);

}

MU_TEST_SUITE(send_string_sexta_expect_string_sexta)
{
	//Arrange: variaveis usadas pro teste
	char	*expected;
	char	*result;

	//Act: ação do teste
	
	expected = ft_strdup("SEXTA");
	result = set_key("SEXTA=sofrencia");	

	//Assert: comparação do teste
	mu_assert_string_eq(expected, result);

}

MU_TEST_SUITE(send_string_sofrencia_expect_string_sofrencia)
{
	//Arrange: variaveis usadas pro teste
	char	*expected;
	char	*result;

	//Act: ação do teste
	
	expected = ft_strdup("sofrencia");
	result = set_value("SEXTA=sofrencia");	

	//Assert: comparação do teste
	mu_assert_string_eq(expected, result);

}

MU_TEST_SUITE(send_string_double_equal_expect_equalsofrencia)
{
	//Arrange: variaveis usadas pro teste
	char	*expected;
	char	*result;

	//Act: ação do teste
	
	expected = ft_strdup("=sofrencia");
	result = set_value("SEXTA==sofrencia");	

	//Assert: comparação do teste
	mu_assert_string_eq(expected, result);

}

MU_TEST_SUITE(test_suite)
{
	// Tests for set_key()
	MU_RUN_TEST(send_string_sexta_expect_string_sexta);
	MU_RUN_TEST(send_string_double_equal_expect_sexta);

	// Tests for set_value()
	MU_RUN_TEST(send_string_sofrencia_expect_string_sofrencia);
	MU_RUN_TEST(send_string_double_equal_expect_equalsofrencia);
}

int main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();

	return (MU_EXIT_CODE);
}
