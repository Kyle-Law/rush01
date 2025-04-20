/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaw <zlaw@student.42ip.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:12:07 by zlaw              #+#    #+#             */
/*   Updated: 2025/04/20 11:10:54 by zlaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	solve_recursive(char **board, int row, int col)
{
	int	i;

	i = 1;
	while (i <= 4 && row <= 4 && col <= 4)
	{
		if (!is_in_column(board, row, col, i) && !is_in_row(board, row, col, i))
		{
			board[row][col] = i + '0';
			if (row == 4 && !is_correct_top_view(board, col))
				break ;
			if (col == 4)
			{
				if (is_correct_row(board, row))
				{
					solve_recursive(board, row + 1, 1);
					if (row == 4 && is_correct_col(board, col))
						// correct
						print_solution(board);
				}
			}
			else
				solve_recursive(board, row, col + 1);
		}
		i++;
	}
}


void	rush(char **clues)
{
	char	**board;

	board = create_board();
	set_clues(board, clues);
	solve_recursive(board, 1, 1);
	if (board[0][0] == '0')
	{
		print_error();
	}
}

// clues left == 1
// i = 1, row = 1, col = 1
// solve_recursive(board, 1, 1) {
// 	1st loop: i == 1, row = 1, col 1
// 		1
// 		solve_recursive(board, 1, 2) 1 2 void <-
// 		solve_recursive(board, 1, 3) 1 2 3 void <-
// 		solve_recursive(board, 1, 4) 1 2 3 4 -> check is_correct_left -> false -> void

// 	2nd loop: i == 2, row = 1, col = 1; 1 x x x 
// 			// which part initialize back to 0
// 		1 x x x
// 		2 x x x
// 		solve_recursive(board, 1, 2) 2 1 0 0 <- void
// 		solve_recursive(board, 1, 3) 2 1 3 <_ void
// 		solve_recursive(board, 1, 4) 2 1 3 4 -> check is correct left -> false <- void

// 	3rd loop: i = 3, row = 1, col = 1, 2 x x x
// 	..

// 	4rd loop: i = 4, row = 1 , col = 1, '3 x x x'
// 		'4 x x x'
// 		solve_recursive(board, 1, 2) 4 1 0 0 
// 		solve_recursive(board, 1, 3) 4 1 2
// 		solve_recursive(board, 1, 4) 4 1 2 3 -> check is correct left -> true
// 			'4 1 2 3'
// 			solve_recursive(board, 2, 1)
// 			...


// 			4123
// 			1234
// 			2341
// 			3412


// }
