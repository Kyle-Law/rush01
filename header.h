/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 10:55:05 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/19 10:55:19 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	print_error(void);
void	print_solution(char **puzzle_board);
void	set_clues(char **puzzle_board, char **clues);

#endif
