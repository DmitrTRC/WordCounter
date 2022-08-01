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

void erasePunctuation (std::string &text) {
    text.erase (std::remove_if (text.begin (), text.end (), ::ispunct), text.end ());
}

int main (int argc, char **argv) { // Get the file name from the command line.
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <file_name>" << std::endl;
        return 1;
    }

    std::map<std::string, int> dictionary;

    std::ifstream file (argv[1]);

    if (!file.is_open ()) {
        std::cout << "File " << argv[1] << " is not open" << std::endl;
        return 1;
    }

    std::string word;
    while (file >> word) {
        erasePunctuation (word);
        dictionary[word]++;
    }

    file.close ();

    std::vector<std::pair<std::string, int>> sorted_dictionary;

    for (auto &pair: dictionary) {
        sorted_dictionary.emplace_back (pair.first, pair.second);
    }
    //Sort the dictionary by the frequency of the words.
    std::sort (sorted_dictionary.begin (), sorted_dictionary.end (),
               [] (const std::pair<std::string, int> &a, const std::pair<std::string, int> &b) {
                   return a.second > b.second;
               });

    std::cout << "Total words: " << dictionary.size () << std::endl;

    for (auto &pair: sorted_dictionary) {
        std::cout << pair.first << "\t : \t" << pair.second << std::endl;
    }

}

//Step 1: Open the file from Argument and read word by word.
//Step 2: Create dictionary of words and their frequency.
//Step 3: Print the sorted dictionary.
//Step 4: Print the total words and the total frequency.