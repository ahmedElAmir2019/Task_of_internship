int *array;

void create(int n)
{
    array=malloc((n+1)*sizeof(int));
    array[0]=0;
    array[1]=1;
    array[2]=2;
    for (int i = 3; i <= n; i++)
    {
        array[i]= array[i-3] + array[i-2];

    }
   
}
void main()
{
    // advantage is the complexity is the the least
    //dis advantage is  consume storage in big numbers
    int n=10;
    printf("please enter n");
    //scanf("%d",&n);
    create(n);
    printf("the result is %d \n ",array[n]);
}