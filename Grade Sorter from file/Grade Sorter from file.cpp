// Grade Sorter from file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//ofstream = output file stream
//always close object.close()

int main()
{
    /*
    * create 3 vectors, lining up the indexes for each person.
    * check if file exists, pull file.
    * iterate through, value assignment order is fName0 lName0 grade0
    * //check if newlines change anything
    */
    ifstream gradeFile("gradesIn.txt");
    string currentLine;//current input from file
    //while this is true that there is more, get from att0, and assign to variable in att1
    //while(getline(gradeFile, currentLine))
    //so grab the line, split it, assign it, then continue to next line.

    cout << "Hello World!\n";
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
