#include <stdio.h>

int main()
 {
    int arr[10], arr1[10], arr2[10];
    int i,j=0,k=0,x;
       printf("Input the number of elements  :");
       scanf("%d",&x);
       printf("Input  elements in the array :\n",x);
       for(i=0;i<x;i++)
        {
	      printf("element  %d : ",i);
	      scanf("%d",&arr[i]);
	    }

    for(i=0;i<x;i++)
    {
	if (arr[i]%2 == 0)
	{
	   arr1[j] = arr[i];
	   j++;
	}
	else
	{
	   arr2[k] = arr[i];
	   k++;
	}
    }

    printf("\nThe Even elements  : \n");
    for(i=0;i<j;i++)
    {
	printf("%d ",arr1[i]);
    }

    printf("\nThe Odd elements  :\n");
    for(i=0;i<k;i++)
    {
	printf("%d ", arr2[i]);
    }
    printf("\n\n");
 }
