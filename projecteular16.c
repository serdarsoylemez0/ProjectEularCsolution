#include <stdio.h>
#include <math.h>


int main()
{

    FILE *fp;
    double c;
    c = pow(2,1000);
    char ch;
    int sum=0;
    fp = fopen("a.txt","w");
    fprintf(fp, "%.0lf",c);
    fclose(fp);
    fp = fopen("a.txt","r");
    ch = fgetc(fp);
    while (!feof(fp))
    {
        if(ch == '\n')
            continue;
        sum += (ch -'0');
        ch = fgetc(fp);
    }
    fclose(fp);
    printf("%d", sum);

    return 0;

}
