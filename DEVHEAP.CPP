#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void max_heapify(int *,int);
void build_max_heap(int *,int);
void heapsort(int *,int);
void swap(int *,int *);
int heapsize;
int count=0;
void main()
{
	int *arr,n,i;
	clrscr();
	printf("Enter no. of elements = ");
	scanf("%d",&n);
	arr=(int *)malloc(sizeof(int)*n);
	printf("Enter array elements = ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
//heapsize = n;
	heapsort(arr,n);
	printf("\nAfter heapsort \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("count=%d",count);
	getch();
}
void heapsort(int *arr,int len)
{
	int i;
	count++;
	build_max_heap(arr,len);
	count++;
	for(i= len-1;i>=1;i--)
	{
		count++;
		swap(&arr[0],&arr[i]);
		count++;
		heapsize = heapsize -1;
		count++;
		max_heapify(arr,0);
		count++;
	}
	count++;
}
void max_heapify(int *arr,int i)
{
	int l=2*i,r=2*i+1,largest;
	count++;
	if(l<heapsize && arr[l]>arr[i])
	{
		count++;
		largest = l;
		count++;
	}
	else
	{
		count++;
		largest = i;
		count++;
	}
	if(r<heapsize && arr[r]>arr[largest])
	{
		count++;
		largest = r;
		count++;
	}
	if(largest != i)
	{
		count++;
		swap(&arr[i],&arr[largest]);
		count++;
		max_heapify(arr,largest);
		count++;
	}
	count++;
}
void build_max_heap(int *arr,int len)
{
	int i;
	count++;
	heapsize = len;
	count++;
	for(i =len/2;i>=0;i--)
	{
		count++;
		max_heapify(arr,i);
		count++;
	}
	count++;
}
void swap(int *a ,int *b)
{
	int temp = *a;
	count++;
	*a= *b;
	count++;
	*b= temp;
	count++;
}