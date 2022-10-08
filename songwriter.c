#include <stdio.h>
#include "musiclib.h"

int main(void) {
	char input = 'C';
	printf("Enter the note you'd like to be played. Only the C Major scale is currently supported. Enter Z to exit. \n");
	do {
		scanf("%c", &input);
		switch (input) {
			case 'C':
				c4();
				break;
			case 'D':
				d4();
				break;
			case 'E':
				e4();
				break;
			case 'F':
				f4();
				break;
			case 'G':
				g4();
				break;
			case 'A':
				a4();
				break;
			case 'B':
				b4();
				break;
		}
	} while (input != 'Z');
}