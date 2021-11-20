#include<stdio.h>

void swap( int *x,int *y)
{
	int tmp = *x;
	*x =*y;
	*y = tmp;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//void selection_sort(int *a, int num)
//{
//	int i,j,min;
//	for(i=0;i < num-1;i++)
//	{
//		min =i;
//		for(j=i+1;j <num;j++)
//		{
//			if(a[min] > a[j])
//			{
//				min = j;
//			}
//		}
//		swap(&a[min],&a[i]);
//	}
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//void bubble_sort(int *a, int num)
//{
//	int i,j;
//	for(i=0;i < num;i++)
//	{
//		for(j=i+1;j <num;j++)
//		{
//			if(a[i] > a[j])
//			{
//				swap(&a[i],&a[j]);
//			}
//		}
//	}
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//void insertion_sort(int *arr ,int num)
//{
//	int i =0,j =0;
//	int a[num];
//	for(i =0; i <num;i++)
//	{
//		a[i] = arr[i];
//		j =i;
//		while(j >0)
//		{
//			if(a[j] > a[j-1])
//			{
//				break;
//			}
//			swap(&a[j] , &a[j-1]);
//			j--;
//		}
//	}
//	for(i =0;i < num; i++)
//	{
//		arr[i] = a[i];
//	}
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void quick_sort(int *arr,int first,int last)
{
	int i,j,pivot =0;
	if(first <= last)
	{
		pivot = first;
		i = first;
		j = last;
		while(i < j)
		{
			while(arr[i] > arr[pivot] && i <= last)
			{
				i++;
			}
			while(arr[j] > arr[pivot] && j >= first)
			{
				j--;
			}
			if(i < j)
			{
				swap(&arr[i],&arr[j]);
			}
		}
		swap(&arr[pivot],&arr[j]);
		quick_sort(arr,first,pivot-1);
		quick_sort(arr,pivot+1,last);
		
		
	}
	
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
show(int *arr,int num)
{
	int i=0;
	while(num >i)
	{
		printf("%d ",arr[i]);
		i++;
	}
}
int main()
{
	int num =10;
	int a[num] = {1,2,9,8,4,6,5,0,7,3};
//	selection_sort(&a[0],num);
//	bubble_sort(&a[0],num);
//	insertion_sort(&a[0],num);
	quick_sort(&a[0],0,9);
	show(&a[0],num);
	return 0;
	
	
}
