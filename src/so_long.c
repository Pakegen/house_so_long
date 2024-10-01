#include"so_long.h"

void	so_long(void)
{
	void	*mlx;
	void	*mlx_win;

	mlx = mlx_init();
	if (!mlx)
		return ;
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello World!");
	if (!mlx_win)
		return ;
	mlx_loop(mlx);
}

int	main(void)
{
	so_long();
	return (0);
}
