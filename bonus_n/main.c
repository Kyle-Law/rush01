/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:10:29 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/20 18:11:34 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>
int	get_board_size_from_arg(char *str)
{
	int	n = atoi(str);
	if (n >= 4 && n <= 9)
		return (n);
	return (-1);
}

int	main(int argc, char **argv)
{
	int		 n;
	char	**clues;

	if (argc != 3)
	{
		print_error();
		return (1);
	}

	n = get_board_size_from_arg(argv[1]);
	if (n == -1)
	{
		print_error();
		return (1);
	}

	clues = convert_in_array(argv[2], n);
	if (!clues || !is_correct_params(argv[2], n))
	{
		print_error();
		return (1);
	}
	rush(clues, n);
	return (0);
}
