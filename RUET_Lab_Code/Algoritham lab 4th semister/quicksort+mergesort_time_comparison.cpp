#include<bits/stdc++.h>
using namespace std;
vector< long long int>arr;


void swap(long long * a,  long long* b)
{
    long long t = *a;
    *a = *b;
    *b = t;
}

long long  partition (vector<long long int >arr, long long  low,long  long high)
{
    long long pivot = arr[high];    // pivot
    long long i = (low - 1);  // Index of smaller element

    for (long long  j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(vector<long long int >arr, long long low, long long high)
{
    if (low < high)
    {
        long long pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(long long arr[], long long size)
{
    long long i;
    cout<<"Quick Sort"<<endl;
    for (i=0; i < size; i++){
        cout<<arr[i]<<" ";}
cout<<endl;
}

/** ///////////////////////////////////////Merge sort ////////////////////////////////**/

void merge(long long  l, long long m, long long r)
{
    cout<<"a";
    long long  i, j, k;
    long long n1 = m - l + 1;
    long long n2 =  r - m;
    long long L[n1], R[n2];

    /// Copy data to temp arrays L[] and R[]
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

    // Copy the remaining elements of L[], if there are any
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /// Copy the remaining elements of R[], if there       are any
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort( long long  l,long  long r)
{
    cout<<"c";
    if (l < r)
    {
        cout<<"b";
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        long long  m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort( l, m);
        mergeSort( m+1, r);

        merge(l, m, r);
    }
}
int main()
{
double t1,t2,t3,t4;
    long long a[100000];
    long long m, n = 100000;
    srand(time(NULL));
    for(long long i=0;i<n;i++){
       // arr[i]=rand();
         int m=rand();
       arr.push_back(m);
        //a.push_back(arr[i]);
    }
    //sort(arr,arr+n);

      t1=clock();
    //quickSort(arr, 0, arr.size());
    //quickSort(a, 0, n-1);
      mergeSort(0,arr.size()-1);
     t2=clock();
    //printArray(arr, n);
   cout<<"  Time Needed (quick sort) :"<<double((t2-t1)/CLOCKS_PER_SEC)<<endl;
   /*
     t3=clock();
  mergeSort(arr,0,arr.size()-1);
 // mergeSort(a,0,n-1);
    t4=clock();
   // print(arr, n);
     cout<<"  Time Needed (merge sort) :"<<double((t4-t3)/CLOCKS_PER_SEC)<<endl;

    return 0;
    */
}
