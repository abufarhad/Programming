#include <stdio.h>
int main()
{
    int D[1000], A[100]= {1, 21, 33, 46, 57}, B[100]= {26, 47, 58, 89, 110}, n, m, i, j=0, temp;
    printf("How many elements in array A?\n");
    scanf("%d", &n);
    for(i=0; i<n; i++)
        D[i]=A[i];
    printf("How many elements in array B?\n");
    scanf("%d", &m);
    for(i=n; i<n+m; i++)
    {
        D[i]=B[j];
        j++;
    }
    printf("After merging 2 arrays.\n");
    for(i=0; i<n+m; i++)
        printf("%d\n", D[i]);
    for(i=0; i<n+m; i++)
    {
        for(j=i+1; j<n+m; j++)
        {
            if(D[i]>D[j])
            {
                temp=D[i];
                D[i]=D[j];
                D[j]=temp;
            }
        }
    }
    printf("After sorting in ascending order.\n");
    for(i=0; i<n+m; i++)
        printf("%d\n", D[i]);
    return 0;
}

