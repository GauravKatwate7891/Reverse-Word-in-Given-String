#include<stdio.h>
#include<conio.h>

int main()
{
    char cStr[50]="",cStr2[50]="";
    int j=0,k=0;

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
    j=j+1;
    while(cStr[j] != '\0')
    {
        j++;
    }
    for(j=j-1; cStr[j] != ' '; j--,k++)
    {
        cStr2[k]=cStr[j];
    }
    for(j=j+1,k=0; cStr[j] != '\0'; j++,k++)
    {
        cStr[j]=cStr2[k];
    }

    printf("\n 3rd Word is Reverse In Given String =>%s",cStr);

    getch();
    return 0;
}
