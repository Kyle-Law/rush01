/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:12:43 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/20 18:13:03 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header>

char	**memory_allocation(int rows, int cols)
{
	char	**table;
	int		i;

	table = (char **)malloc(sizeof(char *) * rows);
	if (!table)
		return (NULL);
	i = 0;
	while (i < rows)
	{
		table[i] = (char *)malloc(sizeof(char) * cols);
		if (!table[i])
			return (NULL);
		i++;
	}
	return (table);
}

char	**create_board(int n)
{
	char	**board;
	int		i, j;

	board = memory_allocation(n + 2, n + 2);
	i = 0;
	while (i < n + 2)
	{
		j = 0;
		while (j < n + 2)
		{
			board[i][j] = '0';
			j++;
		}
		i++;
	}
	return (board);
}
