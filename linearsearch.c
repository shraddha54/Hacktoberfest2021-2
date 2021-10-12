#include <stdio.h>
int search(int a[],int n,int x)
{   int i;
 for(i=0;i<n;i++)
   if(a[i] == x)
     return i;
 return -1;
}

int main(void)
{   int a[]={3,6,9,12,35};
    int x= 9;
 int n = sizeof(a) / sizeof(a[o]);
 
 int result = search(a,n,x);
 result  == -1;
 ?printf("element is present in array");
 :printf("element is not found");
 return 0;
}
