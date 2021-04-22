 //5번 문제.
#include <stdio.h>
#include <math.h>


double round(double val)
{
	return floor(val + 0.5);
}

void sort(double results[])
{

	int temp;

	for (int i = 0; i < 3; i++)
	{
		for (int j = i+1; j < 3; j++)
		{
			if (results[i] > results[j])
			{
				temp = results[i];
				results[i] = results[j];
				results[j] = temp;
			}
		}
	}

}

int main()
{

	double results[3];

	for (int i = 0; i < 3; i++)
	{
		scanf("%lf", &results[i]);
	}

	sort(results);

	printf("%.0f ", floor(results[0]));
	printf("%.0f ", round(results[1]));
	printf("%.0f ", ceil(results[2]));

}
