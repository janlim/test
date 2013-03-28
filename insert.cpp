#include <iostream>
using namespace std;
void insertion_sort(int * array, unsigned int first, unsigned int last)
{
	int i,j;
	int temp;
	for (i = first+1; i<=last;i++)
	{
		temp = array[i];
		j=i-1;

		//与已排序的数逐一比较，大于temp时，该数移后
		while((j>=first) && (array[j] > temp))
		{
			array[j+1] = array[j];
			j--;
		}	
		array[j+1] = temp;	//被排序数放到正确的位置
	}
}

int main()
{
	int pData[10]={7,5,9,3,4,1,8,2,6,10};
	for(int i = 0;i<10;++i)
		cout<<pData[i]<<' ';
	cout<<endl;
	insertion_sort(pData,0,9);
	for(int i = 0;i<10;++i)
		cout<<pData[i]<<' ';
	return 0;
}