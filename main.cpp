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

std::map<std::string, int> dictionary;
std::vector<std::pair<int,std::string>>dictionary2;
int main (int argc, char **argv) {// Get the file name from the command line.
    std::ifstream file;
    std::string word, filename;
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    filename = argv[1];

    file.open (filename);
    if (!file.is_open ()) {
        std::cout << "Could not open file " << filename << std::endl;
        return 1;
    }

    while (file >> word) {
        dictionary[word]++;

    }

    for (auto &[word_, frequency]: dictionary) {
        dictionary2.emplace_back (frequency, word_);
    }
    std::sort (dictionary2.begin (), dictionary2.end ());
    for (auto item:dictionary2){
        std::cout<<item.second<<": "<<item.first;
    }
    

    return 0;
}

//TODO: Output with sorting the dictionary by frequency. ( Highest to lowest )




//Step 1: Open the file from Argument and read word by word.
//Step 2: Create dictionary of words and their frequency.
//Step 3: Print the sorted dictionary.
//Step 4: Print the total words and the total frequency.
