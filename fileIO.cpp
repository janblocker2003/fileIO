//fileIO code

#include <fstream>
#include <iostream>
#include <sstream>

int main(){
	std::ofstream outFile;
	outFile.open("data.csv");
	if (outFile.is_open()){
		outFile << "1, 2, this" << std::endl;
		outFile << "3, 3, is" << std::endl;
		outFile << "8, 1, a" << std::endl;
		outFile << "2, 4, lot" << std::endl;
                outFile << "2, 1, of" << std::endl;
                outFile << "4, 2, fun" << std::endl;
	} //end if
	else {
		std::cout << "file did not open" << std::endl;
	} //end else
	
	std::ifstream inFile;
	std::string currentLine;
	std::string text;
	std::stringstream converter;
	int firstNum;
	int secondNum;
	int finalNum;
	int i = 0;

	inFile.open("data.csv");
	while (getline(inFile, currentLine, ',')){
		//testing below
		std::cout << currentLine << std::endl;
		/*
		converter.clear();
		converter.str("");
		conveter.str(currentLine);
		*/
	} //end while
} //end main


