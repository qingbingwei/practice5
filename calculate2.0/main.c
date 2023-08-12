#include <stdio.h>

void menu()
{
    printf("*****************************\n");
    printf("****** 1. add 2. sub   ******\n");
    printf("****** 3. mul 4. div   ******\n");
    printf("******    0.exit       ******\n");
    printf("*****************************\n");
}
int Add(int x, int y )
{
    return x + y;
}
int Sub(int x, int y )
{
    return x - y;
}int Mul(int x, int y )
{
    return x * y;
}int Div(int x, int y )
{
    return x / y;
}


int main()
{
    int x = 0;
    int y = 0;
    int ret = 0;
    int input = 0;
    int (*parr[5])(int ,int ) = {0,Add,Sub,Mul,Div};
    do
    {
        menu();
        printf("please choose:>");
        scanf("%d",&input);
        if(input == 0)
            printf("exit");
        else if(input >= 1 && input <= 4)
        {
            printf("please scan:>");
            scanf("%d %d",&x,&y);
            ret = parr[input](x,y);
            printf("%d\n",ret);
        }
        else
            printf("wrong");
    }while(input);


    return 0;
}
