#include<stdio.h>
#include<math.h>
int main()
{
    int n,l,i,j,temp;

    scanf("%d",&n);
    while(n--)
    {
        int counter=0;
        scanf("%d",&l);
        int permutation[l];
        for(i=0;i<l;i++)
            scanf("%d",&permutation[i]);
         for(i=0;i<l;i++)
        {
            for(j=i+1;j<l;j++)
            {
                if(permutation[i]>permutation[j])
                {  /* temp=permutation[i];
                    permutation[i]=permutation[j];
                    permutation[j]=temp;*/
                    counter++;
                }
            }
        }



        printf("Optimal train swapping takes %d swaps.\n",counter);

    }
}
