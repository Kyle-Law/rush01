/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:15:56 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/20 18:16:21 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int	is_in_row(char **board, int row, int col, int digit, int n)
{
	int i = 1;
	while (i < col)
	{
		if (board[row][i] == digit + '0')
			return (1);
		i++;
	}
	return (0);
}

int	is_in_column(char **board, int row, int col, int digit, int n)
{
	int i = 1;
	while (i < row)
	{
		if (board[i][col] == digit + '0')
			return (1);
		i++;
	}
	return (0);
}

int	is_correct_row(char **board, int row, int n)
{
	return (is_correct_view(board, row, 1, 0, n) && is_correct_view(board, row, 1, 1, n));
}

int	is_correct_col(char **board, int col, int n)
{
	return (is_correct_view(board, col, 0, 0, n) && is_correct_view(board, col, 0, 1, n));
}
