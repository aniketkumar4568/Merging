#include <stdio.h>
#include <stdlib.h>
int C[45];
int main()
{
    int A[89],B[89],m,n,i,j,k;
    printf("enter size of 1st array \n");
    scanf("%d",&m);
    printf("enter the sorted elements\n");
    for(i=0;i<m;i++)
    {
                   scanf("%d",&A[i]);
    }
    printf("enter size of 2nd array \n");
    scanf("%d",&n);
    printf("enter the sorted elements\n");
    for(j=0;j<n;j++)
    {
                   scanf("%d",&B[j]);
    }
    Merge(A,B,m,n);
    printf("after merging,the combined sorted array is \n");
    for(k=0;k<m+n;k++)
    {
                   printf(" %d ",C[k]);
    }
    return 0;
}
void Merge(int A1[45],int B1[45],int x,int y)
{

               int i=0,j=0,k=0;

               while(i<x&& j<y)
               {
                              if(A1[i]<B1[j])
                              {
                                             C[k++]=A1[i++];
                              }
                              else

                                             C[k++]=B1[j++];

               }
               for(;i<x;i++)
               {
                              C[k++]=A1[i];
               }
               for(;j<y;j++)
               {
                              C[k++]=B1[j];
               }
}
