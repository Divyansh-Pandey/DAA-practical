#include<stdio.h>
#include<conio.h>
int count=0;
void main(){
	void get(int[],int);
	int partition(int[],int,int);
	void quick_sort(int[],int,int);
	void swap(int*,int*);
	void print(int[],int);
	int n,arr[100];
	printf("Enter number of Elements");
	scanf("%d",&n);
	count++;
	get(arr,n);
	count++;
	quick_sort(arr,0,n);
	count++;
	print(arr,n);
	count++;
       printf("count %d",count);
       clrscr();
}
void get(int arr[],int n){
 int i;
printf("\n Enter element in array");
	for(i=0;i<n;i++){
	count++;
	scanf("%d",&arr[i]);
	count++;
	}
}
void swap(int *element1,int *element2){
count++;
	int t=*element1;
	*element1=*element2;
	*element2=t;
	count++;
}


int partition(int arr[],int start,int end){
	int pivot=arr[end]; //last element as Pivot element
	count++;
       int i=start-1;
	for(int j=start;j<=end;j++){
	count++;
		if(arr[j]<pivot){
		count++;
		i++;
		swap(&arr[i],&arr[j]);
			count++;
		}
	}
	swap(&arr[i+1],&arr[end]);
	count++;
	return i+1;
}

void quick_sort(int arr[],int start,int end){
count++;

       if(end>start){
	int pi=partition(arr,start,end);
	quick_sort(arr,start,pi-1);
	count++;
	quick_sort(arr,pi+1,end);
	count++;
	}
}
void print(int arr[],int n){
		count++;
printf("The sorted array is :-");
	for(int i=1;i<=n;i++){
	count++;
		printf("%d->",arr[i]);
		count++;
	}
	printf("The value of Count is %d",count);
	getch();
}