#include<iostream>
using namespace std;

int main()
{	
	int num[] = {70, 20, 50, 10, 30};
	for(int i = 0; i < 4; i++)
	{
		int temp, temp2;
		bool swi = 0;
		temp = i;
		for(int j = i + 1; j < 5; j++)
		{
			if(num[temp] > num[j])
			{
				temp = j;
				swi = 1;
			}
		}
		if(swi)
		{
			temp2 = num[i];
			num[i] = num[temp];
			num[temp] = temp2;
		}		
	}
	for(int k = 0; k < 5; k++)
	{
		cout << num[k] << " "; 
	}
	return 0;
}