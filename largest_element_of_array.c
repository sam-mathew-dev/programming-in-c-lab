#include <stdio.h>
int main(void) 
{
  int a[500],i,n,l;
  printf("enter size of array");
  scanf("%d",&n);
  printf("enter array elements");
  for(i=1;i<n;i++)
  {
	  scanf("%d",&a[i]);
  }
  l=a[0];
  for(i=0;i<n;i++)
  {
	  if(a[i]>l)
      l=a[i];   
  }
   printf("largest element is %d",l);
   return 0;
}
