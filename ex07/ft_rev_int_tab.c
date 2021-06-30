#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int start;
	int end;
	int khazan;

	start = 0;

	end = size - 1;

	while (start < size / 2)
	{
		khazan = tab[end];
		tab[end] = tab[start];
		tab[start] = khazan;
		start++;
		end--;
	}
}
