#include "fractol.h"

void	print_square(t_data img)
{
	print_uxxahayac(img, 100, 100, 300);
	print_uxxahayac(img, 300, 100, 300);
	print_horizonakan(img, 100, 100, 300);
	print_horizonakan(img, 100, 300, 300);
}

void	print_triangle(t_data img)
{
	print_horizonakan(img, 400, 400, 600);
	print_gic(img, 400, 400, 500);
	print_hakarak_gic(img, 500, 500, 400);
}

// void	print_circle(t_data img, int x0, int y0, int r)
// {
// 	int	i;
// 	int	j;

// 	i = x0 - r + 50;
// 	j = y0 - r + 50;
// 	while(!(i > 2*r))
// 	{
// 		while (!(j > 2*r))
// 		{
// 		// printf("%d\n", (i - x0));
// 			if ((pow((i - x0), 2) + (pow((j - y0), 2) == pow(r, 2))))
// 				my_mlx_pixel_put(&img, i, j, 0x00FF0000);
// 			j++;
// 		}
// 		i++;
// 	}
// }

void	print_circle(t_data img, int x0, int y0, int r)
{
	int	x;
	int y;

	x = 0;
	y = 0;
	while (y < 202)
	{
		x = 0;
		while (x < 202)
		{
			if(((x - x0)*(x - x0)) +((y - y0)*(y - y0)) <= r*r)
				my_mlx_pixel_put(&img, x, y, 0x00FF0000);
			x++;
		}
		y++;
	}
}