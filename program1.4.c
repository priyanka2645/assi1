#include<stdio.h>

void check(int ino)
{
    if((ino <5)==0)
    {
        return true;

    }
    else
    {
        return false;

    }






}
int main()
{
    int iVlaue = 0;

    bool bRet = false;

    printf("rnter the numner");
    scanf("%d",&iVlaue);

    bRet = check(iVlaue);

    if(bRet == true)
    {
        printf("Divisible by 5");
        
    }
    else
    {
         printf("Divisible  not by 5");

    }


    return 0;

}