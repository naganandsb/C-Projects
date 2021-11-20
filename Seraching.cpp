#include<stdio.h>

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//void leanear_search(int *arr,int num,int search)
//{
//	int i=0;
//	for(i =0;i < num; i++)
//	{
//		if(search == arr[i])
//		{
//			printf("Found in %d\n",i);
//			return;
//		}
//	}
//	printf("Not Found \n");
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int binary_search(int *arr,int r,int l,int search)
{
	if(r >= l)
	{
		int m = (l+r)/2;
		
		if(arr[m] == search )
		{
			return(printf("Found at %d\n",m));
		}
		else if(arr[m] > search)
		{
			return binary_search( arr, m-1, l, search);
		}
		else
		{
			return binary_search( arr, r, m+1, search);
		}
	}
	return(printf("Not Found\n"));
	
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


int main()
{
	int num =10,search;
	int arr[num] = {0,1,2,3,4,5,6,7,8,9};
	search =1;
//	leanear_search(&arr[0],num,search);
	binary_search(&arr[0],9,0,search);
	search =12;
//	leanear_search(&arr[0],num,search);
	binary_search(&arr[0],9,0,search);
	return 0;
}
