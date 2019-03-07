#include<conio.h>
#include<stdio.h>
int i,j;
void pat1();
void pat2();
void pat3();
void pat4();
void main()
{
clrscr();
pat1();
printf("\n");
pat2();
printf("\n");
pat3();
printf("\n");
//pat4();
getch();
}


void pat1()
{
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",i);
}
printf("\n");
}

}

void pat2()
{

for(i=5;i>=1;i--)
{
for(j=i;j>=1;j--)
{
printf("%d",j);
}
printf("\n");
}
}


void pat3()
{
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
}

void pat4()
{
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("%d ",j);
}
printf("\n");
}
for(i=4;i>=0;i--)
{
for(j=1;j<=i;j++)
{
printf("%d ",j);
}
printf("\n");
}
}