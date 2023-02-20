int main()
{
 int f=0, g=1, i;
 for(i=0; i<7; i++)
 {
  printf("%d\n",f);
  f=f+g;
  g=f-g;
  }
return 0;
}
