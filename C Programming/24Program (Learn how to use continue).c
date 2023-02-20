int main()
{
    int c ;
    for(c=0;c<10;c++)
    {
        printf("#");
        if(c>6)
        continue;
        printf(" %d ",c);
    }
    return 0;
}
