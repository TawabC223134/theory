#include<windows.h>
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
    int i,time=1000000;
    for(i=5;i<=30;i++)
    {
        gotoxy(10,i);
        printf("TAWAB AHMED");fflush(stdout);

        usleep(time);
        gotoxy(10,i);
        printf("           ");fflush(stdout);

    }
    return 0;

}
