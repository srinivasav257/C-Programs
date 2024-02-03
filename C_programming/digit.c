int main()
{
    int n;
    int count=0;
    printf("enter the integer number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        ++count;

// hi
    }
    printf("no. of digits : %d",count);
    return 0;
}
