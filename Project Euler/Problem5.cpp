
int		smallest_multiple()
{
	long long int		number;
	int		control;
	int 	control2;
	int		dividor;
	
	control = 1;
	number = 200000;
	while(control)
	{
		control2 = 1 ;
		dividor = 1;
		while(dividor <= 20 && control2)
		{
			if (number % dividor == 0)
				dividor++;
			else
			{
				number++;
				control2 = 0;
			}
		}
		if (dividor == 21)
			control = 0;
	}
	return (number);
}

//232792560
