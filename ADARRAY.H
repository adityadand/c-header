//arrayizer  made by aditya dand
#include<conio.h>
#include<stdio.h>
int n,i,arr[20],a[3][3],j,r,c,arry[10][10],b[20],c1[20];
void transpose();
void scan2darr();
void print2darr();
void rev1darr();
void scanarr();
void printarr();

void main()
{
scanarr();
printarr();
rev1darr();

getch();
}

void arr1()
{
printf("\n an array of 50 element is created");
}
void scanarr()
{     printf("\n enter no size u want to enter");
       scanf("%d",&n);
printf("\n	 enter elements in the array");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
}

void printarr()
{
printf("\n the array is ");
 for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}

void sum1darr()
{
// make 2 arrays   use scanarr for 1 array set n=5 and make 2nd array with b set n=5;
for(i=0;i<5;i++)
{
c1[i]=arr[i]+b[i];
}
printf("\n sum of 1 d array is %d",c1);
}

void rev1darr()
{
printf("\n reverse of 1d array is \n");

for(i=n-1;i>=0;i--)
{
printf("%d ",a[i]);
}

}



void transpose()
{
printf("\n enter 9 elements");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\n array before transpose \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("\n transpose of array is \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",a[j][i]);
}
printf("\n");
}
}

void scan2darr()
{
printf("\n enter no of row u want max 10");
scanf("%d",&r);

printf("\n enter no of coloumn u want 10");
scanf("%d",&c);

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d ",&arry[i][j]);
}
}
}

void print2darr()
{
printf("\n 2d array \n");

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",arry[i][j]);
}
printf("\n");
}
}