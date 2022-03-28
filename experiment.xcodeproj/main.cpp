//  main.cpp 28 mar 2022
//  experiment trying to output and input from a file, retaining pointer
//  this does work, outputs strings to screen and creates output file
//  this was fixed by kevin partin
//  now does output to a file
//  also trying to read input from file, it also will not do it. grrrr
//  Created by Charles Phillips on 3/16/22.

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

// The vector is passed a constant reference, which means the calling argument is passed as a reference, but the contents of the vector can not be changed.
void writeOutput1 (const vector<string> &v)  // this outputs names
{
    for (string i : v)
        cout << "Value: " << i << endl;

} // end of writeOutput1 function

void writeOutput2 (string pointer[], ostream& os)  // replaces above line version for array of strings
// this outputs the letters
//  this function does not return any values, etc

{
    for (int i = 0; i < 4; i++)
    {
        os << "Observation: " << *pointer << endl; // value of what is at pointer
        pointer++;
    } //  end of for loop

} // end of writeOutput2 function

/*
void readInput (string observation)  // replaces above line version for array of strings
// this function does not return any values, etc

{
    for (int i = 0; i < 4; i++)
    {
        getline(observation)  ; // read in four lines
        
    } //  end of for loop

} // end of readInput function
*/

int main(int argc, const char *argv[])
{
    //   FILE* spOutput;

    ofstream stringout("/Users/Charles/Desktop/common_files/string-out.txt");
    // this does create string-out.txt in the correct directory

    ifstream stringin("/Users/Charles/Desktop/common_files/string-in.txt");

    // This is a declaration for an array of strings.
    string observation[] = {"a a", "b b", "c c", "d d"}; // should overwrite with values in file
    // strings can have spaces in them

    // This is a declaration for a vector of strings. Strings can have spaces and are declared using double quotes.
    vector<string> v = {"Fred", "Wilma", "Barney", "Betty"};
    // vectors can have spaces in them

    writeOutput1(v); // call function writeOutput1

    // You must pass the output stream to the output function.
    writeOutput2(observation, stringout); // call function writeOutput2
    
    
    stringout.close();
    stringin.close();
    return 0;

} // end of main
