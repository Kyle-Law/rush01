#include <header.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

int	mark_success(char **board)
{
	board[0][0] = '1';
	return (1);
}

void	print_solution(char **board, int n)
{
	int i, j;
	i = 1;
	while (i <= n)
	{
		j = 1;
		while (j <= n)
		{
			ft_putchar(board[i][j]);
			if (j != n)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
