int main()
{
 int a,i,k=1;
  for(a=2; k<=5; a++)
  {
   for(i=2; i<=a-1; i++)
   {
    if(a%i==0)
     break;
     }
    if(i==a)
    {
     printf(" %d ",a);
     k++;
     }
    }
return 0;
}
