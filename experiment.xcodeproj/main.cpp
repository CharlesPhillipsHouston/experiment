//  main.cpp 10+ apr 2022
//  experiment trying to output and input from a file, retaining pointer
//  this has been worked on by kevin partin
//  now does read from two files and write to an output file but not from a function
//  Created by Charles Phillips on 3/16/22.

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

/*
class observations  // a class called observations, lets read in lines and read fields
{
public:
    
    string observation;  // each string read in is an observation
    int satno;
    int eccen;
    string color;
}
observations () {}; // empty constructor
class observations(char *satname)
{
    
}; // end of observations declaration

*/

// The vector is passed a constant reference, which means the calling argument is passed as a reference, but the contents of the vector can not be changed.

void writeOutput1 (const vector<string> &v)  // this outputs names to the screen
{
    for (string i : v)
        cout << "writeoutput1: " << i << " Neanderthal? " << endl;
  // just checking that you can put in other text for formatting, etc
} // end of writeOutput1 function

/*
void writeOutput2 (string observation, stringout)  // replaces above line version for array of strings
// this outputs the letters to a file
//  this function does not return any values, etc
{
    for (int i = 0; i < 4; i++)
    {
        os << "writeoutput2: " << *pointer << endl; // value of what is at pointer
        pointer++;
    } //  end of for loop

} // end of writeOutput2 function
*/

/*
void readInput (string observation&)  // replaces above line version for array of strings
// this function does not return any values, etc

{
    for (int i = 0; ! stringin.eof(); i++)
    {
        getline(observation)  ; // read in all lines
        
    } //  end of for loop

} // end of readInput function
*/

int main(int argc, const char *argv[])
{
    //   FILE* spOutput;
    string observation;  // define a string called observation
    int i;

    ofstream stringout("/Users/Charles/Desktop/common_files/string-out.txt");
    // this does create string-out.txt in the correct directory

    ifstream stringin1("/Users/Charles/Desktop/common_files/string-in1.txt");
    ifstream stringin2("/Users/Charles/Desktop/common_files/string-in2.txt");
    
    if (! stringin1)
    {
        cout << "Error opening input file" << endl;
    }

    else
        for (i =0; ! stringin1.eof(); i++)
        {
            getline( stringin1, observation);
            cout << "main, if loop: " << observation << endl;
            stringout << "main: " << observation << endl;
            // this line does write to output file
            cout << endl;
        } // end of for
    
    for (i =0; ! stringin2.eof(); i++)  // can do two input files
    {
        getline( stringin2, observation);
        cout << "main, if loop: " << observation << endl;
        stringout << "main: " << observation << endl;
        // this line does write to output file
        cout << endl;
    } // end of for
    
    
    // This is a declaration for an array of strings.
  //  string observation[] = {"aaa", "bbb", "c c", "d d"}; // should overwrite with values in file
    // observation is obviously one observation, there will be three total

    // This is a declaration for a vector of strings. Strings can have spaces and are declared using double quotes.
    vector<string> v = {"Fred", "Wilma", "Barney", "Betty"};
    // vectors can have spaces in them
   // here trying to use (with mods!!) some code from the c++ site
    
    writeOutput1(v); // call function writeOutput
    // You must pass the output stream to the output function.
    
  // writeOutput2(observation, stringout);
    
   // observation;
    
    stringout.close();
    stringin1.close();
    stringin2.close();
    
    return 0;

} // end of main
