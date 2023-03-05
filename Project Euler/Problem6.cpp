
int	square(int number)
{
	return (number * number);
}

int		SUM_square_difference()
{
	long	sq_sum;
	long	sum_sq;
	long	diff;
	
	sq_sum = 0;
	sum_sq = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum_sq += square(i);
	}
	for (int j = 1; j <= 100; j++)
	{
		sq_sum += j;
	}
	sq_sum = square(sq_sum);
	diff = sq_sum - sum_sq;
	return (diff);
}


//25164150
