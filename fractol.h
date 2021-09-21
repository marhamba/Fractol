#ifndef FRACTOL_H
#define FRACTOL_H


#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;


void	print_triangle(t_data img);
void	print_square(t_data img);
void	print_hakarak_gic(t_data img, int x, int y, int max);
void	print_gic(t_data img, int x, int y, int max);
void	print_uxxahayac(t_data img, int x, int y, int max);
void	print_horizonakan(t_data img, int x, int y, int max);
void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void    print_circle(t_data img, int x0, int y0, int r);

#endif