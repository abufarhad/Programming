#include <bits/stdc++.h>
using namespace std;

void print(int *a, int n)
{
    int i=0;
    while(i<n){
        cout<<a[i]<<",";
        i++;
    }
}

void swap(int i,int j, int *a){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}


void quicksort(int *arr, int left, int right){
    int min = (left+right)/2;
   // cout<<"QS:"<<left<<","<<right<<"\n";

    int i = left;
    int j = right;
    int pivot = arr[min];

    while(left<j || i<right)
    {
        while(arr[i]<pivot)
        i++;
        while(arr[j]>pivot)
        j--;

        if(i<=j){
            swap(i,j,arr);
            i++;
            j--;
        }
        else{
            if(left<j)
                quicksort(arr, left, j);
            if(i<right)
                quicksort(arr,i,right);
            return ;
        }
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i <size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
   int n=10000,a[n];
    srand( time(NULL));
    {
        for(int i=0; i<10000; i++)
        {
            a[i]=rand();
        }
    }
    clock_t begin,end;

    printf("Given array is \n");
   // printArray(a, n);
  begin = clock();
    quicksort(a, 0, n - 1);
    end = clock();
    printf("\nSorted array is \n");
  //  printArray(a, n);


double    time_spent = (double)(end - begin) /CLOCKS_PER_SEC;

    printf("\nTime Taken %lf ", time_spent);
    return 0;
}
