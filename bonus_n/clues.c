/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clues.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:13:22 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/20 18:13:51 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	set_clues(char **board, char **clues, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		board[0][i + 1] = clues[0][i];
		board[n + 1][i + 1] = clues[1][i];
		board[i + 1][0] = clues[2][i];
		board[i + 1][n + 1] = clues[3][i];
		i++;
	}
}

char	**convert_in_array(char *str, int n)
{
	char	**clues;
	int		i = 0, j = 0, k = 0;

	clues = memory_allocation(4, n);
	while (str[i] && j < 4)
	{
		if (str[i] >= '1' && str[i] <= '9')
		{
			clues[j][k++] = str[i];
			if (k == n)
			{
				j++;
				k = 0;
			}
		}
		i++;
	}
	return (clues);
}

int	is_correct_params(char *str, int n)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if ((str[i] >= '1' && str[i] <= '9') && (i % 2 == 0 || str[i - 1] == ' '))
			count++;
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	return (count == 4 * n);
}
