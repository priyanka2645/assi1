#include<stdio.h>
void Accpect(int ino)
{
    int icnt = 0;
    for(icnt= 1; icnt<=5; icnt++)
    {
        printf("*");

    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accpect(iValue);

    return 0;

}