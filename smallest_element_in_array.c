#include <stdio.h>
int main(void) 
{
 int a[500],i,n,s;
  printf("enter size of array");
  scanf("%d",&n);
  printf("enter array elements");
  for(i=1;i<n;i++)
  {
	  scanf("%d",&a[i]);
  }
  s=a[0];
  for(i=0;i<n;i++)
  {
	  if(a[i]<s)
      s=a[i];   
  }
printf("smallest array element is %d",s);
   return 0;
}
