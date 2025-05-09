


unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int temp = 0;
	unsigned int aa = a;
	unsigned int bb = b;

	if ((int)a <= 0 || (int)b <= 0)
		return (0);
	
	while (bb != 0)
	{
		temp = bb;
		bb = aa % bb;
		aa = temp;
	}
	return (a * b / aa);
}