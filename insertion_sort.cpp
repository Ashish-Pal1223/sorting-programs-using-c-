#include<iostream>
using namespace std;

int main()
{
	int num[] = {40, 50, 20, 100, 30, 60, 5, 8, 2, 67}, temp, k;
	for(int i = 1; i < 10; i++)
	{
		for(int j = 0; j < i; j++)
		{
			if(num[i] < num[j])
			{
				temp = num[i];
				for(k = i; k > j; k--)	
				{
					num[k] = num[k - 1];
				}
				num[j] = temp;
			}
		}
	}
	for(int s = 0; s < 10; s++)
	{
		cout << num[s] << " ";
	}
	return 0;
}