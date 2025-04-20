/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:14:07 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/20 18:14:39 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	exec_row_n(char **board, int row, int col, int n)
{
	if (is_correct_row(board, row, n))
		solve_recursive(board, row + 1, 1, n);
	if (row == n && is_correct_col(board, col, n))
	{
		mark_success(board);
		print_solution(board, n);
	}
}

void	solve_recursive(char **board, int row, int col, int n)
{
	int i;

	i = 1;
	while (i <= n && row <= n && col <= n && board[0][0] != '1')
	{
		if (!is_in_column(board, row, col, i, n) && !is_in_row(board, row, col, i, n))
		{
			board[row][col] = i + '0';
			if (row == n && !is_correct_view(board, col, 0, 0, n))
				break ;
			if (col == n)
				exec_row_n(board, row, col, n);
			else
				solve_recursive(board, row, col + 1, n);
		}
		i++;
	}
}

void	rush(char **clues, int n)
{
	char **board = create_board(n);

	set_clues(board, clues, n);
void	exec_row_n(char **board, int row, int col, int n)
{
	if (is_correct_row(board, row, n))
		solve_recursive(board, row + 1, 1, n);
	if (row == n && is_correct_col(board, col, n))
	{
		mark_success(board);
		print_solution(board, n);
	}
}

void	solve_recursive(char **board, int row, int col, int n)
{
	int i;

	i = 1;
	while (i <= n && row <= n && col <= n && board[0][0] != '1')
	{
		if (!is_in_column(board, row, col, i, n) && !is_in_row(board, row, col, i, n))
		{
			board[row][col] = i + '0';
			if (row == n && !is_correct_view(board, col, 0, 0, n))
				break ;
			if (col == n)
				exec_row_n(board, row, col, n);
			else
				solve_recursive(board, row, col + 1, n);
		}
		i++;
	}
}

void	rush(char **clues, int n)
{
	char **board = create_board(n);

	set_clues(board, clues, n);
	solve_recursive(board, 1, 1, n);
	if (board[0][0] == '0')
		print_error();
}	solve_recursive(board, 1, 1, n);
	if (board[0][0] == '0')
		print_error();
}
