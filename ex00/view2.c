/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 17:07:53 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/19 17:28:26 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     is_in_row(char **puzzle_board, int row, int column, int digit)
{
	int     i;
	
	i = 1;
	while (i < column)
	{
		if (puzzle_board[row][i] == digit + '0')
			return (1);
		i++;
	}
	return (0);
}


int	is_in_column(char **puzzle_board, int row, int column, int digit)
{
	int	i;

	i = 1;
	while (i < row)
    {
        // If the digit received is found in the column, the return is 1
		if (puzzle_board[i][column] == digit + '0')
			return (1);
        i++;
    }
    // If it doesn't find the value, the return is 0
	return (0);
}
