#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
void hide();
void show();
void ckp();
void main()
{
    int ans;
    top:
    system("cls");
    printf("1 >> hide\n\n2 >> show \n\nenter the your choice >> ");
    ans=getch();

    switch(ans)
    {
        case '1':
        hide();
        goto top;
        case '2':
        ckp();
        show();
        goto top;
        default:
        goto top;
    }

}
void hide()
{
     char a[500]="attrib +h +s ";
    char b[15];
    char c[515];
 printf("\n\nenter the folder name");
scanf("%s",b);
strcat(a,b);
system(a);

}
void show()
{
        char a[500]="attrib -h -s ";
    char b[15];
    char c[515];
system("mp3");
scanf("%s",b);
strcat(a,b);
system(a);

}
void ckp()
{

    char ms[25],a;
    char pas[25]="mohan1";
    int i=0,cnt=0;
    int k=0,l;
    A:
    printf("\nenter your pass >> ");
    fflush(stdin);
    a=getch();
    fflush(stdin);
  //  fp=fopen("k0045m\\pas.mp","rb+");
   // fread(&kk,sizeof(kk),1,fp);
    while(a!=13)
    {
        if(a!=8)
        {
             ms[i]=a;
            i++;


        }
        else
        {
            if(i>0)
            {
            ms[i]='\0';
            i--;
            }
        }

        system("cls");
        l=0;
        l=strlen(ms);
        k=0;
        printf("\nenter your pass >> ");
        while(k<i)
        {
       printf("%c",1);
       k++;
        }
        fflush(stdin);
a=getch();
    }
    ms[i]='\0';
    if(strcmp(pas,ms)!=0)
    {
        i=0;
        while(ms[i]!='\0')
        {
            ms[i]='\0';
            i++;
        }
        cnt++;
        i=0;
        system("cls");
        printf("try again and your %d times error password",cnt);
        goto A;
    }

   // fclose(fp);
}
