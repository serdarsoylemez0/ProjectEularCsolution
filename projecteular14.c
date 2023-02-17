#include <stdio.h>
# include<time.h>

int collatz( long long int num)
{
    if (num == 1)
        return 1;
    else if (num % 2 == 0)
    {
        num = num/2;
        return 1 + collatz(num);
    }
    else if (num % 2 !=0)
    {
        num = (3*num)+1;
        return 1 + collatz(num);
    }
}

int main()
{
    long int max=0,max_num,cur=0;
    int i;
    clock_t start, end;
    double execution_time;
    start = clock();
    for (i=13; i<1000000;i++)
    {
        cur = collatz(i);
        if(max<cur)
        {
            max = cur;
            max_num = i;
        }
    }
    printf("%ld\n", max_num);
    end = clock();
    execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("%lf", execution_time);

    return 0;
}
