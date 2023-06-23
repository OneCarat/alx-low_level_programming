

int mul(int a, int b)
{
	int i = 1;
	int x = a;
	while (i < b)
	{
		x = x + a;
		b--;
	}
	return x;
}

