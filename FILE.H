#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<ctype.h>
FILE *fp,*fpv,*fpo,*fpu,*fpl,*fp2;
char ch[30],ch2,c;
char str[30];
int i=0;
int cchar=0,cword=0,cline=0;
void writefile();
void readfile();
void reverse();
void vowel();
void checkupperlower();
void readwrite();
void count();


void main()
{
clrscr();
  //writefile();
  //readfile();
  //reverse();
   //vowel();
   //checkupperlower();
   //readwrite();
   count();
   getch();
}
void writefile()
{
printf("\n write to file");
fp=fopen("writefile.txt","w");
if(fp ==NULL)
{
printf("\n file could not be opened");
exit(1);
}
printf("\n enter char to put in file");
gets(ch);
// ch is a string
//fprintf(fp,"%s",ch);
fputs(ch,fp);
fclose(fp);
}

void readfile()
{
// to read file
printf("\n to read a file");
fp=fopen("readfile.txt","r");
if(fp==NULL)
{
printf("\n file could not be opened");
exit(1);
}
while(1)
{     //ch2 is a character ! string
ch2=fgetc(fp);
if(ch2==EOF)
break;
else
printf("%c",ch2);
}

fclose(fp);
}


void reverse()
{
printf("\n enter text to reverse it in file");
fp=fopen("reverse.txt","w");
if(fp==NULL)
{
printf("\n file could not be opened");
}
gets(ch);
// while taking from user take the whole goddamn string
fputs(strrev(ch),fp);
fclose(fp);
}

void vowel()
{

fpv=fopen("Vowels.txt","w");
fpo=fopen("others.txt","w");
if(fpv==NULL||fpo==NULL)
{
printf("\nFiles could not be opened!");
exit(0);
}
printf("\nEnter a string");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
//fprintf(fpv,"%c",str[i]);
fputc(str[i],fpv);
else
//fprintf(fpo,"%c",str[i]);
fputc(str[i],fpo);
}
printf("\nDone.....");
fcloseall();
getch();
}

void checkupperlower()
{
fpo=fopen("others.txt","r");
fpu=fopen("upper.txt","w");
fpl=fopen("lower.txt","w");
if(fpo==NULL||fpu==NULL||fpl==NULL)
{
printf("\nFiles could not be opened");
exit(1);
}
while(1)
{
c=fgetc(fpo);
if(c==EOF)
break;
else if(isupper(c))   //uppercase
fputc(c,fpu);	//write in upper file
else if(islower(c))	//lowercase
fputc(c,fpl);	//write in lower file
}
printf("\nDone...");
fcloseall();
getch();
}

void readwrite()
{
fp=fopen("fromhere.txt","r");
fp2=fopen("tohere.txt","w");
// let the fukc begin

if(fp==NULL || fp2==NULL)
{
printf("\n file coud not be opened");
exit(1);
}

while(1)
{
ch2=getc(fp);
if(ch2==EOF)
break;
fputc(ch2,fp2);
}
printf("\n done");
fcloseall();
}

void count()
{

fp=fopen("longest.txt","r");

if (fp==NULL)
{

printf("\n file coud not be opened");
exit(1);
}
while(1)
{
c=fgetc(fp);
if(c==EOF)
break;
if(c==' '||c=='\n')
cword++;
if(c=='\n');
cline++;
cchar++;
}
fclose(fp);
printf("\n no of char =%d",cchar);
printf("\n no of words =%d",cword);
printf("\n no of lines =%d",cline);
}









