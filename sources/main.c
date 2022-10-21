/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:13:00 by coder             #+#    #+#             */
/*   Updated: 2022/10/21 22:58:59 by guribeir         ###   ########.fr       */
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

MU_TEST_SUITE(send_string_oldpwd_expect_oldpwd)
{
	//Arrange: variaveis usadas pro teste
	char	*expected;
	t_list	*env;
	t_list	*result;
	t_list	*tmp;

	env = NULL;
	env = set_env(__environ);
	//Act: ação do teste
	
	expected = ft_strdup("/home/coder");
	result = change_env(env, "OLDPWD", "/home/coder");	
	
	//Assert: comparação do teste
	
	tmp = result;
	while (tmp)
	{
		if (ft_strncmp(tmp->key, "OLDPWD", 7) == 0)
			mu_assert_string_eq(expected, tmp->value);
		tmp = tmp->next;
	}

}

MU_TEST_SUITE(send_string_empty_expect_empty)
{
	//Arrange: variaveis usadas pro teste
	char	*expected;
	t_list	*env;
	t_list	*result;
	t_list	*tmp;

	env = NULL;
	env = set_env(__environ);
	//Act: ação do teste
	
	expected = ft_strdup("");
	result = change_env(env, "OLDPWD", "");	
	
	//Assert: comparação do teste
	
	tmp = result;
	while (tmp)
	{
		if (ft_strncmp(tmp->key, "OLDPWD", 7) == 0)
			mu_assert_string_eq(expected, tmp->value);
		tmp = tmp->next;
	}

}

// MU_TEST_SUITE(send_string_null_expect_null)
// {
// 	//Arrange: variaveis usadas pro teste
// 	char	*expected;
// 	t_list	*env;
// 	t_list	*result;
// 	t_list	*tmp;

// 	env = NULL;
// 	env = set_env(__environ);
// 	//Act: ação do teste
	
// 	expected = ft_strdup(NULL);
// 	result = change_env(env, "OLDPWD", NULL);	
	
// 	//Assert: comparação do teste
	
// 	tmp = result;
// 	while (tmp)
// 	{
// 		if (ft_strncmp(tmp->key, "OLDPWD", 7) == 0)
// 			mu_assert_string_eq(expected, tmp->value);
// 		tmp = tmp->next;
// 	}

// }

MU_TEST_SUITE(test_suite)
{
	// Tests for set_key()
	MU_RUN_TEST(send_string_sexta_expect_string_sexta);
	MU_RUN_TEST(send_string_double_equal_expect_sexta);

	// Tests for set_value()
	MU_RUN_TEST(send_string_sofrencia_expect_string_sofrencia);
	MU_RUN_TEST(send_string_double_equal_expect_equalsofrencia);
	
	// Tests for change_env()
	MU_RUN_TEST(send_string_oldpwd_expect_oldpwd);
	MU_RUN_TEST(send_string_empty_expect_empty);
	//MU_RUN_TEST(send_string_null_expect_null);
}

extern char **environ;

int main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();

	return (MU_EXIT_CODE);
}
