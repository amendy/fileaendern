#include <fstream>

int main() {
	std::ofstream outfile;

	outfile.open("test.txt", std::ios_base::app);
	// Append the new word on the list
	outfile << " Data ";
	system("pause"); 
	return 0;
}