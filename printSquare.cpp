/* 
 * Challenge #1: Print square of length * width
 * 
 */

#include <iostream>

void printSquare(int length, int width){
	for(int i = 0; i < length; i++){
		for(int j=0; j < width; j++)
		{
			std::cout<< "*";
		}
		std::cout << "*\n";
	}
}

int main() {

	/* Declare violations for input*/
	int length, width;

	/* Initialize variables */
	length = 3;
	width = 5;

	/* Print square */
	printSquare(length, width);

	return 0;
}
