#include<bits/stdc++.h>
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
    int pivot = arr[min];//arr[min];

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


void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;


    int L[n1], R[n2];


    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int l, int r)
{
//    cout<<l<<" "<<r<<endl;
    if (l < r)
    {

        int m = l+(r-l)/2;


        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
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
    //printArray(a, n);
  begin = clock();
    mergeSort(a, 0, n - 1);
       end = clock();
    //printf("\nSorted array is \n");
    //printArray(a, n);
    //end = clock();

double    time_spent = (double)(end - begin) /CLOCKS_PER_SEC;

    printf("\nTime Taken for Mergesort %lf ", time_spent);


    begin = clock();
    quicksort(a, 0, n - 1);
    end = clock();
  //  printf("\nSorted array is \n");
  //  printArray(a, n);


  double    time_spen = (double)(end - begin) /CLOCKS_PER_SEC;

    printf("\nTime Taken For Quicksort %lf ", time_spen);
    return 0;
}
