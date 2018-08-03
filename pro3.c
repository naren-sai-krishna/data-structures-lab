

#include <stdio.h>
 
int main()
{
   int a[100], p, i, n;
 
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (i = 0; i < n; i++)
      scanf("%d", &a[i]);
 
   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &p);
 
   if (p >= n+1)
      printf("Deletion not possible\n");
   else
   {
      for (i= p-1; i< n - 1; i++)
         a[i] = a[i+1];
 
      printf("Resultant array:\n");
 
      for (i = 0; i < n - 1; i++)
         printf("%d\n", a[i]);
   }
 
   return 0;
}
