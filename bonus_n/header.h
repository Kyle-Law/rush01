/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbinti-d <hbinti-d@student.42iskandar      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:09:56 by hbinti-d          #+#    #+#             */
/*   Updated: 2025/04/20 18:10:08 by hbinti-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

void	print_error(void);
void	ft_putchar(char c);
void	print_solution(char **board, int n);
char	**memory_allocation(int rows, int cols);
char	**create_board(int n);
char	**convert_in_array(char *str, int n);
int		is_correct_params(char *str, int n);
void	set_clues(char **board, char **clues, int n);
void	rush(char **clues, int n);
void	solve_recursive(char **board, int row, int col, int n);
int		is_in_row(char **board, int row, int col, int digit, int n);
int		is_in_column(char **board, int row, int col, int digit, int n);
int		is_correct_row(char **board, int row, int n);
int		is_correct_col(char **board, int col, int n);
int		is_correct_view(char **board, int fixed, int is_row, int is_reverse, int n);
char	get_board_value(char **board, int fixed, int i, int is_row);
int		get_clue(char **board, int fixed, int is_row, int is_reverse, int n);
char	calc_visible(char **board, int fixed, int is_row, int is_reverse, int n);
void	init_loop_vars(int *i, int *end, int *step, int is_reverse, int n);
int		mark_success(char **board);
int		get_board_size_from_arg(char *str);

#endif

