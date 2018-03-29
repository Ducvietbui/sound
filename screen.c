#include "screen.h"
#include <stdio.h>

void 	clearScreen(void){
	printf("%c[2J", ESC);
	fflush(stdout);
}

// function definition of gotoxy()
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
		printf("%c", '*');
	}
}
