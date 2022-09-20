// writing something in exixsting file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp=NULL;
    char ch='c';
    char str[100]="Vipul";
    int a=10;
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    // writing string in file characterwise
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     fputc(str[i],fp);
    // }
    
   // fputc(ch,fp); // for writing a character
  //  fputs(str,fp); // writing a full string in file
    fprintf(fp,"%d %s %c",a,str,ch);
    fclose(fp);
}