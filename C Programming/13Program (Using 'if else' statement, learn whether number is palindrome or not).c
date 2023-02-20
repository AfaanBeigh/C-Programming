int main()
{
 int r,num,rev=0,tem;
 printf("Enter Number: ");
 scanf("%d",&num);
 tem=num;

  while(num>0)
  {
  r=num%10;
  num=num/10;
  rev=rev*10+r;
  }
   if(rev==tem)
   printf("Number is Palindrome");
   else
   printf("Number is not Palindrome");
 return 0;
 }
