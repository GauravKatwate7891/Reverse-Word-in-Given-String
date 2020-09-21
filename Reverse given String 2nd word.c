#include<stdio.h>
#include<conio.h>

int main()
{
    char cStr[30]="",cStr2[30]="";
    int j=0,l=0;

    printf("\n Enter The String=>");
    gets(cStr);

    while(cStr[j] != ' ')
    {
        j++;
    }
    j=j+1;
    while(cStr[j] != ' ')
    {
        j++;
    }
    for(j=j-1; cStr[j] != ' '; j--,l++)
    {
        cStr2[l]=cStr[j];
    }
    for(j=j+1,l=0; cStr[j] != ' '; j++,l++)
    {
        cStr[j]=cStr2[l];
    }

    printf("\n 2nd Word is Reverse In Given String =>%s",cStr);

    getch();
    return 0;
}
