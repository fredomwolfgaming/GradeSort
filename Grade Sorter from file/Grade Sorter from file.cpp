// Grade Sorter from file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//ofstream = output file stream
//always close object.close()
/*
* make a class to hold the variables used for a student name name grade?
* lost in-class notes, still waiting on professor's copy for visual memory triggers.
* 
* while(filein(filename, lineStorageVar))//so while you can get a new line?
* then lineStorageIn.close()
* 
* will need 3 arrays:
*   firstName
*   lastName
*   grade
* make a function to resort the all indexes based on grade?
* if grade 0 is more than grade 1, make grade 1 be first. adjust all arrays to match.
*   move smallest to begenning, then eventually it'll be sorted. use array length to find out how long.
*   i know the code was mentioned in class, but i'll have to dig for it.
* 
* i've reached the end of the necessary pesudocode, next step, finding the lost code.
* i've also reached the end of where caffine, sugar, and a lack of sleep will allow me to recall waht i was thinking when i started typing this sentence.
*/

int main()
{

    ifstream gradeFile("gradesIn.txt");
    string currentLine;//current input from file
    //while this is true that there is more, get from att0, and assign to variable in att1
    //while(getline(gradeFile, currentLine))
    //so grab the line, split it, assign it, then continue to next line.

    cout << "Hello World!\n";
    
}