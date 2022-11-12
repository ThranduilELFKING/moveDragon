#include <curses.h>
#include <string.h>
#include <unistd.h>


int main()
{
	char mesg[]="Just a string";
	int row,col;

	//curses模式初始化方法
	initscr();
	getmaxyx(stdscr,row,col);
	mvprintw(row/4,col/2,"%s\n",mesg);
	mvprintw(row/2,0,"%s\n",mesg);
	mvprintw(row/3,col - 1,"%s\n",mesg);
	getch();
    refresh();
    sleep(3);

	mvprintw(row/2,0,"This screen has %d rows and %d columns\n",row,col);
	printw("Try resizing your window(if possible) and then run this program again");

    getch();
    refresh();
    sleep(3);

    endwin();
	// //忽略键盘中断
 //    signal(SIGINT, SIG_IGN);
 //    //关闭字符回显
 //    noecho();

	return 0;
}