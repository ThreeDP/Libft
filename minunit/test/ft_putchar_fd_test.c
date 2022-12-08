/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:51:53 by dapaulin          #+#    #+#             */
/*   Updated: 2022/12/07 18:51:53 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <limits.h>

static int  setup(char *file, int *fd)
{
    fd = open(file, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
    if (!*fd)
        return (0);
    return (1);
}

static char *unset(char *file, int fd)
{
    char    buf[BUFFER_SIZE];

    close(fd);
    fd = open(file, O_RDONLY);
    if (read(fd, buf, BUFFER_SIZE) == -1)
        return (NULL);
    remove(file);
    return (ft_strdup(buf));
}

MU_TEST_SUITE(passing_a_char_D_should_be_1)
{
	//ARRANGE
    int         fd;
    int         size;
    char        *str;
    char        *file               = "./files/D";
	char        c                   = 'D';
    char        *exp_str            = "D";
    int         exp_size            = 1;

	//ACT
    if (!setup(file, &fd))
        return ;
	size = ft_putchar_fd(c, 1);

	//ASSERT
    str = unset(file, fd);
    mu_assert_int_eq(exp_size, size);
    mu_assert_string_eq(exp_str, str);
    free(str);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(passing_a_char_D_should_be_1);
}

int main() {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}