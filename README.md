# Documentation

## Directions from assignment:
Create all the variables you'll need. This will include a file pointer, at least one stringstream, and a number of strings and ints
Open up the data file
Use a loop to read the file one line at a time
Use a stringstream and the getline() function to read one data element at a time
note that the delimiter is a char, not a string, so it should be in a single quote
note also that you may need temporary strings, because getline always returns strings
Use a stringstream to do any data conversion you might need
Add up the two integers
Print the text that number of times
Repeat for each line in the text file

## Pseudocode:
```
Create a file named data.csv and insert the following information:
include fstream
1, 2, this
3, 3, is
8, 1, a
2, 4, lot
2, 1, of
4, 2, fun
Close the file

Create fileIO.cpp in vim
include fstream, iostream, sstream

int main
  create string variable called currentLine
  create string variable called text
  create int variable called firstNum
  create int variable called secondNum
  create stringstream called converter
  create int variable called finalNum
  creat int called i that gets 0

  open inFile "data.csv"
  while getline -> inFile, currentLine, delimiter is ',' (while there is a line to read)
    clear converter
    empty str converter
    pass current line into stringstream converter.str(currentLine)
    converter passes back into firstNum, secondNum, and text
    firstNum + secondNum = finalNum
    for (int i = 0; i < finalNum; i++)
      cout text
    //end for loop
  //end while loop
  close the file
//end main
```
