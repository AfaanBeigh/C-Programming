int main()
 {
  int n=0;
A:if(n<1)
  {
  printf("Value of n is %d\n",n);
  n++;
  goto A;
  }
 {
  int n=1;
B:if(n<2)
  {
  printf("Value of n is %d\n",n);
  n++;
  goto B;
  }
 {
  int n=1;
C:if(n<2)
  {
  printf("Value of n is %d\n",n);
  n++;
  goto C;
  }
 {
  int n=2;
D:if(n<3)
  {
  printf("Value of n is %d\n",n);
  n++;
  goto D;
  }
 {
  int n=3;
E:if(n<4)
  {
  printf("Value of n is %d\n",n);
  n++;
  goto E;
  }
 {
  int n=5;
F:if(n<6)
  {
  printf("Value of n is %d\n",n);
  n++;
  goto F;
  }
  return 0;
 }}}}}}
