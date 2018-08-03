#include <stdio.h>
void main(){
  int a[5],*ba,i,*ad,in;
    printf("enter numbers:");
  for(i=0;i<5;ba++,i++)
    scanf("%d",&a[i]);
  printf("enter the index of array to find its address:");
  scanf("%d",&in);
    ba=&a[0];
    printf("base address is %p\n",ba);
  ad=ba+sizeof(int)*(in+0);
  printf("address of a[%d] is %p\n",in,ad);
}


