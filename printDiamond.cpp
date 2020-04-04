/*
 * Challenge #2: Print centered diamond of max width
 *
 */

#include <iostream>

void printStar(int val, int width){
	/* Print spaces */
	for(int space = val; space < width; space++){
		std::cout <<" ";
	}

	/* Print stars */
	for (int i = 0; i < val; i++){
		std::cout << "* ";
	}

}

void printDiamond(int width){

	/* Create top half of diamond - only odd rows */
	for(int top = 1; top <= width; top++){

		if(top %2 ==1)
			printStar(top,width);

		std::cout << "\n";
	}

	/* Create bottom half of diamond - only odd rows */
	for (int bot = width -1; bot >= 0; bot--){

		if(bot % 2 == 1)
			printStar(bot,width);

		std::cout << "\n";

	}

}

int main() {

	/* Print diamond of max n width */
	printDiamond(17);

	return 0;
}
