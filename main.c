#include "fractol.h"
int	key_hook(int keycode)
{
	if (keycode == 49)
		printf("You pressed the space button)\n");
	if (keycode == 36)
		printf("You pressed the Enter button)\n");
	if (keycode == 53)
	{
		printf("You pressed the Ecs button( Bye!\n");
		// mlx_destroy_window(vars.mlx, vars.win);
		exit(1);
	}
	// vars = 0;
	return(0);
}

// void	ft_exit(int keycode, t_vars vars)
// {
// 	if (keycode == 53)
// 	{
// 		mlx_destroy_window(vars.mlx, vars.win);
// 		exit(1);
// 	}
// }

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;
	t_vars vars;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 500, 500, "Helllo");
	img.img = mlx_new_image(mlx, 500, 500);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
	// print_square(img);
	// print_triangle(img);
	print_circle(img, 101, 101, 100);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_key_hook(mlx_win, key_hook, &vars);
	mlx_loop(mlx);
}


// int	mouse_hook(int x, )

// int	main(void)
// {
// 	t_vars	vars;

// 	vars.mlx = mlx_init();
// 	vars.win = mlx_new_window(vars.mlx, 640, 480, "Hello world!");
// 	mlx_mouse_hook(vars.win, );
// 	mlx_loop(vars.mlx);
// }