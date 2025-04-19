/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 10:57:51 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/19 10:58:45 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	char	**clues;

	clues = convert_in_array(argv[1]);
	if (!is_correct_params(argv) || argc != 2)
		print_error();
	else
		rush(clues);
	return (0);
}
