// Grade Sorter from file.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

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
*while getline
* use line to pass into token convertr (getline returns true when there are more lines)
*
* pass by refrence (type &name)
* update by using the object created refrencing this class s.fName[0]
*    
*/

class Student {//storage space
public:
    string fName;
    string lName;
    int grade;

};

void splitter(string cLine)//split string into array of words, aka tokenized
{
    /*https://www.tutorialspoint.com/stringstream-in-cplusplus
    * https://www.w3schools.com/cpp/cpp_strings_input.asp
    * i should be able to access student attributes from here,
      otherwise there needs to be get-set built into the class.
    */
    stringstream stStrm(cLine);//breaker class, refrence, and input string
    vector<string> words;//variable storage for set of words that makeup the string
    string tmp;//word storage per iteration of pulling from stream.

    //store these values in student
    while (stStrm >> tmp)
    {//while tmp can still be accessed, one word at a time, add those tmp Words to words vector set
        words.push_back(tmp);
    }



    string str("Hello from the dark side");
    string tmp; // A string to store the word on each iteration.
    stringstream str_strm(str);
    vector<string> words; // Create vector to hold our words
    while (str_strm >> tmp) {
        // Provide proper checks here for tmp like if empty
        // Also strip down symbols like !, ., ?, etc.
        // Finally push it.
        words.push_back(tmp);
    }

}



int main()
{



    ifstream gradeFile("gradesIn.txt");//input file stream
    string currentLine;//current input line from file
    vector<Student> student;//create vector object, with type of student class. name it student. has 3 attributes.






    //while this is true that there is more, get from att0, and assign to variable in att1
    //while(getline(gradeFile, currentLine))
    //so grab the line, split it, assign it, then continue to next line.

    cout << "Hello World!\n";
    
}