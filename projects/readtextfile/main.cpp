#include <iostream>
#include <fstream> //File handling library
#include <string>
using namespace std;

int main() {
    

    //Writing to a text file
    ofstream outputFile("example.txt", ofstream::app);
    if (outputFile.is_open()) {
        outputFile << "Hello, World!" << endl;
        outputFile << "This is a sample text file." << endl;
        outputFile.close();
    } else {
        cerr << "Unable to open file for writing." << endl;
    }

    //Reading from a text file
    ifstream inputFile("example.txt");
    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            transform(line.begin(), line.end(), line.begin(), ::tolower);
            //check if any line contains the word hello
            if (line.find("hello") != string::npos) {
                cout << "Found a line with 'hello': " << line << endl;
            }

            cout << line << endl;
        }
        inputFile.close();
    } else {
        cerr << "Unable to open file for reading." << endl;
    }

    return 0;
}