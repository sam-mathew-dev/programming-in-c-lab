#include <stdio.h>
int main(void) 
{
  int a[100],i,n;
  printf("enter size of array");
  scanf("%d",&n);
  printf("enter array elements");
  for(i=0;i<n;i++)
  {
	  scanf("%d",&a[i]);
  }
  printf("array elements are\t");
  for(i=n-1;i>=0;i--)
  {
	  printf("%d\t",a[i]);
  }
  return 0;
}
