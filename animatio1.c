#include<stdio.h>
int main()
{
     void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
 {
    printf( "starting to sleep...\n" );
    Sleep(3000); // Sleep three seconds
    printf("sleep ended\n");
}
    int i,x1;y1,len;
    scanf("%d%d%d",&x1,&y1,&len);
    for(i=0;i<=len;i++)
    {

    }
}
