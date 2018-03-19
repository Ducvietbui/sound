#include "sound.h"
#include <stdio.h>
#include <math.h>
//function definition of printfID;
void printID(char id[]){
	int i;
	for(i=0; i<4; i++);
		printf("%c", id[i]);

	printf("\n");
}
//function definition of dispWAVHeader()
void dispWAVHeader(char filename[]){
	FILE *fp;
	WAVHeader mh;
	fp = fopen(filename, "r");
	if(fp == NULL){
		printf("Error when open the file!");
		return;
	}
	fread(&mh, sizeof(mh), 1, fp);
	fclose(fp);
	printf("Chunk ID: ");
	printID(mh.chunkID);
	printf("  chunk size: %d\n", mh.chunkSize);
	printf("Format: ");
	printID(mh.format);
	printf("  subchunk 1 ID: ");
	printID(mh.subchunk1ID);
	printf("  subchunk 1 size: %d\n", mh.subchunk1Size);
}