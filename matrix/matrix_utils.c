
#include	"matrix_o.h"

void	print_matrix(t_matrix_obj *matrix)
{
	unsigned int	x;
	unsigned int	y;

	printf("rows = %u \n",matrix->rows);
	printf("columns = %u \n\n",matrix->columns);

	x = 0;
	y = 0;
	while (y < matrix->columns)
	{
		while (x < matrix->rows)
		{
			printf("| %3f ", matrix->matrix[y][x]);
			x++;
		}
		x = 0;
		printf("|\n\n");
		y++;
	}
}

void	null_matrix(struct s_matrix_obj *matrix)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (y < matrix->columns)
	{
		while (x < matrix->rows)
		{		
			if (x == y)
				matrix->matrix[y][x] = 1;
			else
				matrix->matrix[y][x] = 0;
			x++;
		}
		x = 0;
		y++;
	}

}
