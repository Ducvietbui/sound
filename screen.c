#include "screen.h"
#include <stdio.h>
/*
	function definition of clearScreen()
	This function uses VT100 escape sequence \ESC[2J to make the whole
	terminal screen empty
	argument : no
	return : no
*/
void 	clearScreen(void){
	printf("%c[2J", ESC);
	fflush(stdout);
}

/* 	function definition of gotoxy()
	This function uses VT100 escape sequence \ESC[row;colH to set cursor
	to a specific location on the terminal screen
	argument:	row number, 1 is top row
			col number, 1 is left column
	return : no
*/
void 	gotoxy(int row, int col){
	printf("%c[%d;%dH", ESC, row, col);
	fflush(stdout);
}

//function definition of setColor()
void	setColor(int color){
	if(color >= BLACK && color <= WHITE){
		printf("%c[1;%dm", ESC, color);
		fflush(stdout);
	}
}
//function definition of dispBar()
void 	dispBar(int col, double dB){
	int i;
	for(i=0; i <dB/3; i++){
		gotoxy(30-i, col+1);
#ifndef UNICODE		//if unicode is not enabled
		printf("%c", '*');
#else
		printf("%s", BAR);
#endif
	}	//end of for
}	//end of function
