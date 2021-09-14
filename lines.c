#include "fractol.h"

void	print_horizonakan(t_data img, int x, int y, int max)
{
	while (x != max)
	{
		my_mlx_pixel_put(&img, x, y, 0x00FF0000);
		x++;
	}
}

void	print_uxxahayac(t_data img, int x, int y, int max)
{
	while (y != max)
	{
		my_mlx_pixel_put(&img, x, y, 0x00FF0000);
		y++;
	}
}

void	print_gic(t_data img, int x, int y, int max)
{
	while (y != max)
	{
		my_mlx_pixel_put(&img, x, y, 0x00FF0000);
		y++;
		x++;
	}
}

void	print_hakarak_gic(t_data img, int x, int y, int max)
{
	while (y != max)
	{
		my_mlx_pixel_put(&img, x, y, 0x00FF0000);
		y--;
		x++;
	}
}

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	// int offset = (y * line_length + x * (bits_per_pixel / 8));
	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}