#include<stdio.h>
void main(){
    int c,i,j,r,s=0;
    float sp;
    printf("enter no. of rows and columns:\t");
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(a[i][j]==0)
                s++;
    sp=(float)s/(r*c);
    printf("sparsity is %f\n",sp);
    if(sp>1-sp)
        printf("it is a sparse matrix\n");
    else
        printf("not a sparse matrix\n");
}
