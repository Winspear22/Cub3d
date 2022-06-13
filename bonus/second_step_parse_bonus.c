/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_step_parse_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:42:22 by adaloui           #+#    #+#             */
/*   Updated: 2022/06/02 22:56:24 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d_bonus.h"

int	check_file_content(char *argv, t_data *data)
{
	data->map = count_line(argv, data);
	if (check_line_content(data->map, data) == FAILURE)
		return (FAILURE);
	data->map = count_line_for_map(argv, data);
	if (data->map->space_in_map_2 == 1)
		return (return_failure("Error\nError Parsing."));
	if (check_map_content_characters(data) == FAILURE)
		return (FAILURE);
	data->map_info = get_all_map_info(data);
	return (SUCCESS);
}
