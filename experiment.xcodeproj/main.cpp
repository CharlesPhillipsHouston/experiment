//  main.cpp
//  experiment trying to move output to a function, retaining pointer
//  this does work, outputs strings to screen and creates output file
//  this was fixed by kevin partin
//  now trying to output to a file - no joy yet. it creates but does not output
//  also trying to read input from file, it also will not do it. grrrr
//  Created by Charles Phillips on 3/16/22.

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

// The vector is passed a constant reference, which means the calling argument is passed as a reference, but the contents of the vector can not be changed.
void writeOutput1 (const vector<string> &v)
{
    for (string i : v)
    {
        cout << "Value: " << i << endl;
    } //  end of for loop

} // end of writeOutput1 function

void writeOutput2 (string pointer[])  // replaces above line version for array of strings
// this function does not return any values, etc

{
    for (int i = 0; i < 4; i++)
    {
       cout << "Observation: " << *pointer; // value of what is at pointer
        // this does output correctly to screen
    //    fprintf(spOutput, "%c \n", *pointer);
        
   // stringout << *pointer << endl;
        cout << endl;
        pointer++;
    } //  end of for loop

} // end of writeOutput2 function

/*
void readInput (stringin)  // replaces above line version for array of strings
// this function does not return any values, etc

{
    for (int i = 0; i < 4; i++)
    {
        getline(stringin)  ; // read in four lines
        
    } //  end of for loop

} // end of readInput function
*/

 int main(int argc, const char *argv[])
{
 //   FILE* spOutput;
    
  ofstream stringout("/Users/Charles/Desktop/common_files/string-out.txt");
    // this does create string-out.txt in the correct directory
    
    ifstream stringin("/Users/Charles/Desktop/common_files/string-in.txt") ;
    
    string observation[] = {"a a", "b b", "c c", "d d"}; // should overwrite with values in file
    // strings can have spaces in them

    vector<string> v = {"Fr ed", "Wil ma", "Bar ney", "Be tty"};
    // vectors can have spaces in them
    
    writeOutput1(v);  // call function writeOutput
    
    writeOutput2(observation);  // call function writeOutput
    stringout.close();
    stringin.close();
    return 0;

} // end of main

