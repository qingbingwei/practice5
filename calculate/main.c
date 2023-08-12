#include <stdio.h>
//函数指针的运用
//避免代码重复，造成代码冗余
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
//回调函数
void calc(int (*pf)(int,int ))
{
    int ret = 0;
    int x = 0;
    int y = 0;
    printf("please scan number:>");
    scanf("%d %d",&x,&y);
    ret = pf(x,y);
    printf("%d\n",ret);
}


int main()
{
    int input = 0;
    do
    {
        menu();
        printf("please choose:>");
        scanf("%d",&input);

        switch (input)
        {
            case 1:
                calc(Add);
                break;
            case 2:
                calc(Sub);
                break;
            case 3:
                calc(Mul);
                break;
            case 4:
                calc(Div);
                break;
            case 0:
                printf("exit\n");
                break;
            default :
                printf("wrong\n");
                break;
        }
    }while(input);
    return 0;
}
