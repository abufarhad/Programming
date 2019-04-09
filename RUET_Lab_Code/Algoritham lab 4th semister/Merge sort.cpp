#include<bits/stdc++.h>
using namespace std;

int marge(int *a, int start,int mid,int end)
{
    int p=start,q=mid+1,arr[end-start+1],k=0;
    for(int i=start;i<end;i++)
    {
        if(p>mid)  arr[k++]=a[q++];

        else  if(q>end) arr[k++]=a[p++];

        else if(a[p]<a[q])  arr[k++]=a[p++];

        else arr[k++]=a[q++];

    }

    for(p=0;p<k;p++)
    {
        a[start++]=arr[p++];

    }
    for(int m=0;m<end;m++){ cout<<arr[m]<<" ";}



}

int marge_sort(int *a, int start, int end)
{
      if(start<end)
      {
          int mid=(start+end)/2;

          marge_sort( a,start,mid);

          marge_sort(a,mid+1,end);

          marge(a,start,mid,end);

      }
}

int main(){
   int a[1000],i,j,n;
   printf("Enter Array Size : ");
   cin>>n;

   for(i=0;i<n;i++){
   cin>>a[i]; }
   marge_sort(a,0,n-1);

    return 0;
}

//void merge(int arr[], int l, int m, int r)
//{
//    int i, j, k;
//    int n1 = m - l + 1;
//    int n2 =  r - m;
//
//    /* create temp arrays */
//    int L[n1], R[n2];
//
//    /* Copy data to temp arrays L[] and R[] */
//    for (i = 0; i < n1; i++)
//        L[i] = arr[l + i];
//    for (j = 0; j < n2; j++)
//        R[j] = arr[m + 1+ j];
//
//    /* Merge the temp arrays back into arr[l..r]*/
//    i = 0; // Initial index of first subarray
//    j = 0; // Initial index of second subarray
//    k = l; // Initial index of merged subarray
//    while (i < n1 && j < n2)
//    {
//        if (L[i] <= R[j])
//        {
//            arr[k] = L[i];
//            i++;
//        }
//        else
//        {
//            arr[k] = R[j];
//            j++;
//        }
//        k++;
//    }
//
//    /* Copy the remaining elements of L[], if there
//       are any */
//    while (i < n1)
//    {
//        arr[k] = L[i];
//        i++;
//        k++;
//    }
//
//    /* Copy the remaining elements of R[], if there
//       are any */
//    while (j < n2)
//    {
//        arr[k] = R[j];
//        j++;
//        k++;
//    }
//}
//
///* l is for left index and r is right index of the
//   sub-array of arr to be sorted */
//void mergeSort(int arr[], int l, int r)
//{
//    cout<<l<<" "<<r<<endl;
//    if (l < r)
//    {
//        // Same as (l+r)/2, but avoids overflow for
//        // large l and h
//        int m = l+(r-l)/2;
//
//        // Sort first and second halves
//        mergeSort(arr, l, m);
//        mergeSort(arr, m+1, r);
//
//        merge(arr, l, m, r);
//    }
//}
//
///* UTILITY FUNCTIONS */
///* Function to print an array */
//void printArray(int A[], int size)
//{
//    int i;
//    for (i=0; i < size; i++)
//        printf("%d ", A[i]);
//    printf("\n");
//}
//
///* Driver program to test above functions */
//int main()
//{
//    int arr[] = {12, 11, 13, 5, 6, 7};
//    int arr_size = sizeof(arr)/sizeof(arr[0]);
//    cout<<"size : "<<arr_size<<endl;
//
//    printf("Given array is \n");
//    printArray(arr, arr_size);
//
//    mergeSort(arr, 0, arr_size - 1);
//
//    printf("\nSorted array is \n");
//    printArray(arr, arr_size);
//    return 0;
//}
