#include <vector>
#include <iostream>
#include <fstream>
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

std::map<std::string,int>dictionary;
int main (int argc, char **argv) {// Get the file name from the command line.
    std::fstream file;
    std::string word, filename;
    for (int i=0;i<argc;i++){
        filename=argv[i];
    }

    file.open(filename);
    while (file >> word)
    {
        if (dictionary.find(word) == dictionary.end())
            dictionary.insert(make_pair(word, 1));

        else
            dictionary[word]++;
    }

    for (auto& i : dictionary) {
        std::cout << i.first << " - "
             << i.second<< std::endl;
    }
    return 0;
}






//Step 1: Open the file from Argument and read word by word.
//Step 2: Create dictionary of words and their frequency.
//Step 3: Print the sorted dictionary.
//Step 4: Print the total words and the total frequency.
