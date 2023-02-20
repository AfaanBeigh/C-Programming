int main()
{
    int num,rev,binary=0,i=1;
    printf("Enter a Number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        rev=num%2;
        num=num/2;
        binary=binary+(rev*i);
        i=i*10;
    }
    printf("Binary = %d",binary);
    return 0;
}
