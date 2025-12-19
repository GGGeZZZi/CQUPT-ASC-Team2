#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   int a[5]={3,5,1,8,2};
   int *b,i,c,d=0;
   b=a;
   printf("原数组为");
   for(i=0;i<5;i++)
{c+=*(b+i);
if(d<*(b+i))
    d=*(b+i);
     printf("%d",*(b+i));}
printf("累计为:%d",c);
printf("最大值为:%d",d);
printf("倒取为：");
for(i=0;i<5;i++){
      printf("%d",*(b+4-i));}
}
