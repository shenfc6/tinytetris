#include<bits/stdc++.h>
#include<curses.h>
using namespace std;
int main()
{
	srand(time(0));
	initscr();
	curs_set(0);//set the appearance of the cursor,0 means invisialbe
	noecho();
	resizeterm(22,22);//resize the standard and current windows to the specified dimensions.

	if (!has_colors()){
		endwin();
		printf("your computer does not support colors");
		return 1;
	}
	start_color();
	for (int i=1;i<8;i++)
		init_pair(i,i,0);
	box(stdscr,0,0);
	char c=getch();
	while (c!='q')
		c=getch();

	endwin();
	return 0;
}
