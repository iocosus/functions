unsigned int reverseNumber(unsigned int n)
{
	unsigned int r = 0;
	while(n)
	{
		r *= 10;
		r += (n%10);
		n /= 10;
	}

	return r;
}
