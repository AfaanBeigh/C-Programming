#include <stdio.h>
#include <time.h>
#include <windows.h>
//#include <unistd.h>
#include <dos.h>

void delay(int n)
{
    int m = 1000*n;
    clock_t start_time = clock();

     while ( clock()< start_time+m)
     ;
}
int main()
{
 int h,m,s;
 h=m=s=0;



 A: system("cls");

 // sleep(1000);

 printf("%d:%d:%d\n", h,m,s);
 //system("sleep");
 delay(1);
 s++;
 if(s==60)
 {
   s=0;
   m++;
}
if(m==60)
{
m=0;
h++;
}
if(h==24)
h=0;
goto A;

return 0;
}
