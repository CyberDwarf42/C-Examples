#include <fstream>
using namespace std;

int main()
{
    ofstream FirstTextFile ("week2.txt"); // Creates the text file.
    string entry = "a";  // makes a string of "a".
    FirstTextFile << entry << "\n"; // enters that initial string along with a new line.
    while (entry.size() < 15){ // loop that checks the size of the string entry.
        entry = entry + "a"; // concats another "a" to the end of the entry string.
        FirstTextFile << entry << "\n"; // adds that new string to the document and moves to the next line.
    }
    return 0;
}
