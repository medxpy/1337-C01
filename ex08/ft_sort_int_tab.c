#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	klb;
	int	hsb;

	hsb = 0;
	while(hsb < size -1)
	{
		if(tab[hsb] > tab[hsb + 1])
		{
			klb = tab[hsb];
			tab[hsb] = tab[hsb + 1];
			tab[hsb + 1] = klb;
			hsb = 0;
		}
		else 
			hsb++;
	}
	hsb = 0;
	while(hsb < size)
	{
		printf("%d", tab[hsb]);
		hsb++;
	}
}

int main()
{
	int a[] = {2,1,4,3,5};
	ft_sort_int_tab(a, 5);
}
