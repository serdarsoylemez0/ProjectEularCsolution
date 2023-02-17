#include <stdio.h>
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
    int max=0,max_num,cur=0;
    int i;
    for (i=13; i<1000000;i++)
    {
        cur = collatz(i);
        if(max<cur)
        {
            max = cur;
            max_num = i;
        }
    }
    printf("%d", max_num);

    return 0;
}
