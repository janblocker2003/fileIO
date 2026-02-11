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
	std::stringstream otherConverter;
	std::string sfirstNum;
	std::string ssecondNum;
	int firstNum;
	int secondNum;
	int finalNum;

	inFile.open("data.csv");
	while (getline(inFile, currentLine)){
		
		converter.clear();
		converter.str("");
		otherConverter.clear();
		otherConverter.str("");

		converter.str(currentLine);
		getline(converter, sfirstNum, ',');
		getline(converter, ssecondNum, ',');
		getline(converter, text);

		otherConverter << sfirstNum;
		otherConverter >> firstNum;

                otherConverter.clear();
                otherConverter.str("");

		otherConverter << ssecondNum;
		otherConverter >> secondNum;

		finalNum = firstNum + secondNum;
		for (int i = 0; i < finalNum; i++){
			std::cout << text;
		} //end for
		std::cout << std::endl;

	} //end while
	inFile.close();
} //end main


