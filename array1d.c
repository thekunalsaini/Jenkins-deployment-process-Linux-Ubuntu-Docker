#include<stdio.h>
#include<conio.h>
main()
{
  int a[10]={2},sum=0;
  int i;
  printf("enter 10 values");
//for(i=0;i<=9;i++)
//scanf("%s",&a[i]);

  for(i=0;i<=9;i++)
  printf("%d",a[i]);//it means in char only we can use name of array to print otherwise we get garbage value

/*avg=sum/10.0;
  printf("average is %f",avg);*/
  getch();
}
