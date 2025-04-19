/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlaw <zlaw@student.42ip.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:12:07 by zlaw              #+#    #+#             */
/*   Updated: 2025/04/19 16:37:18 by zlaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	rush_recursive(char **board, int row, int col)
{
	int	i;

	i = 1;
	while (i <= 4 && row <= 4 && col <= 4)
	{
		if (!is_in_column(board, row, col, i) && !is_in_row(board, row, col, i))
		{
			board[row][col] = i + '0';
			if (row == 4 && !is_correct_top_view(board, col))
				break;
			if (col == 4)
			{
				if (is_correct_left_view(board, row))
				{
					rush_recursive(board, row + 1, 1);
					if (row == 4 && is_correct_top_view(board, col))
						print_solution(board);
				}
			}
			else
				rush_recursive(board, row, col + 1);
		}
		i++;
	}
}

void	rush(char **clues)
{
	char	**board;

	board = create_board();
	set_clues(board, clues);
	rush_recursive(board, 1, 1);
	if (board[0][0] == '0')
	{
		print_error();
	}
}
