#include <iostream>
#include <map>


//TODO: Open the file from Argument and read word by word.
// Create dictionary of words and their frequency.

//Sample:
//WordCounter demo.txt
//Total words: 500
//The  :  100
//of   :  50
//and  :  40
//to   :  30
//a    :  20


int main () { // Get the file name from the command line.

    std::map<std::string, int> dictionary;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

//Step 1: Open the file from Argument and read word by word.
//Step 2: Create dictionary of words and their frequency.
//Step 3: Print the sorted dictionary.
//Step 4: Print the total words and the total frequency.