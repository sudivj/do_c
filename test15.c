#include <stdio.h>

int main()
{
  int countch=0;
  int countwd=1;

  printf("Enter your sentence in lowercase: ");
  char ch='a';
  while(ch!='\r')
  {
    ch=getche();
    if(ch==' ')
      countwd++;
    else
      countch++;
  }

  printf("\n Words =%d ",countwd);

  printf("Characters = %d",countch-1);

  getc();
}