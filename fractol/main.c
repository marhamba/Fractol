#include "mlx/mlx.h"

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

	void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
	{
		char	*dst;

		// int offset = (y * line_length + x * (bits_per_pixel / 8));
		dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
		*(unsigned int*)dst = color;
	}

void	print_gic(t_data img, int i, int j)
{
	while (i != 200)
	{
		my_mlx_pixel_put(&img, i, j, 0x00FF0000);
		i++;
		j++;
	}
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Helllo");
	img.img = mlx_new_image(mlx, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
	print_gic(img, 100, 0);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}