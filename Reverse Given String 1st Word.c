#include<stdio.h>
#include<conio.h>

int main()
{
    char cStr[30]="",cStr2[30]="";
    int j=0,k=0;

    printf("\n Enter The String=>");
    gets(cStr);

    while(cStr[j] != ' ')
    {
        j++;
    }
    for(j=j-1; j>=0; j--,k++)
    {
        cStr2[k] = cStr[j];
    }
    for(k=k-1,j=0; j<=k; j++)
    {
        cStr[j]=cStr2[j];
    }
    printf("\n 1st Word is Reverse String Is =>%s",cStr);

    getch();
    return 0;
}