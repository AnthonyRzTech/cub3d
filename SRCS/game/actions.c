/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <srajaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 01:01:59 by srajaoui          #+#    #+#             */
/*   Updated: 2023/09/21 01:02:01 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d_header.h"

void	open_south(t_game *game, t_data *img_map)
{
	gray_screen(&game->map.img, game->map.width * 16, game->map.length * 16);
	aff_screen(game, img_map, BACKGROUND, 2);
	if (game->map.map[(int)game->p_x + ((int)(game->p_y + 1)
			* game->map.width)] == 7)
		game->map.map[(int)game->p_x + ((int)(game->p_y + 1)
				* game->map.width)] = 6;
	else if (game->map.map[(int)game->p_x + ((int)(game->p_y + 1)
			* game->map.width)] == 6)
		game->map.map[(int)game->p_x + ((int)(game->p_y + 1)
				* game->map.width)] = 7;
	put_map(game, img_map);
	aff_screen(game, img_map, PLAYER, 2);
	do_ray(game);
	tab_to_image(game, &game->img);
	mlx_put_image_to_window(game->map.mlx, game->map.win,
		game->map.img.img, 0, 0);
}

void	open_north(t_game *game, t_data *img_map)
{
	gray_screen(&game->map.img, game->map.width * 16, game->map.length * 16);
	aff_screen(game, img_map, BACKGROUND, 2);
	if (game->map.map[(int)game->p_x + ((int)(game->p_y - 1)
			* game->map.width)] == 7)
		game->map.map[(int)game->p_x + ((int)(game->p_y - 1)
				* game->map.width)] = 6;
	else if (game->map.map[(int)game->p_x + ((int)(game->p_y - 1)
			* game->map.width)] == 6)
		game->map.map[(int)game->p_x + ((int)(game->p_y - 1)
				* game->map.width)] = 7;
	put_map(game, img_map);
	aff_screen(game, img_map, PLAYER, 2);
	do_ray(game);
	tab_to_image(game, &game->img);
	mlx_put_image_to_window(game->map.mlx, game->map.win,
		game->map.img.img, 0, 0);
}

void	open_west(t_game *game, t_data *img_map)
{
	gray_screen(&game->map.img, game->map.width * 16, game->map.length * 16);
	aff_screen(game, img_map, BACKGROUND, 2);
	if (game->map.map[(int)(game->p_x - 1) + ((int)game->p_y
			* game->map.width)] == 7)
		game->map.map[(int)(game->p_x - 1) + ((int)game->p_y
				* game->map.width)] = 6;
	else if (game->map.map[(int)(game->p_x - 1) + ((int)game->p_y
			* game->map.width)] == 6)
		game->map.map[(int)(game->p_x - 1) + ((int)game->p_y
				* game->map.width)] = 7;
	put_map(game, img_map);
	aff_screen(game, img_map, PLAYER, 2);
	do_ray(game);
	tab_to_image(game, &game->img);
	mlx_put_image_to_window(game->map.mlx, game->map.win,
		game->map.img.img, 0, 0);
}

void	open_east(t_game *game, t_data *img_map)
{
	gray_screen(&game->map.img, game->map.width * 16, game->map.length * 16);
	aff_screen(game, img_map, BACKGROUND, 2);
	if (game->map.map[(int)(game->p_x + 1) + ((int)game->p_y
			* game->map.width)] == 7)
		game->map.map[(int)(game->p_x + 1) + ((int)game->p_y
				* game->map.width)] = 6;
	else if (game->map.map[(int)(game->p_x + 1) + ((int)game->p_y
			* game->map.width)] == 6)
		game->map.map[(int)(game->p_x + 1) + ((int)game->p_y
				* game->map.width)] = 7;
	put_map(game, img_map);
	aff_screen(game, img_map, PLAYER, 2);
	do_ray(game);
	tab_to_image(game, &game->img);
	mlx_put_image_to_window(game->map.mlx, game->map.win,
		game->map.img.img, 0, 0);
}
