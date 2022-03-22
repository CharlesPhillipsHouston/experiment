//  main.cpp
//  experiment trying to move output to a function, retaining pointer
//  this does work, outputs strings to screen and creates output file
//  this was fixed by kevin partin
// now trying to output to a file - no joy yet
//  Created by Charles Phillips on 3/16/22.

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

// The vector is passed a constant reference, which means the calling argument is passed as a reference, but the contents of the vector can not be changed.
void writeOutput (const vector<string> &v)
{

    for (string i : v) {
        cout << "Value: " << i << endl;
    } //  end of for loop

} // end of writeOutput function

/*
void writeOutput (string pointer[])  // replaces above line version for array of strings
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

} // end of writeOutput function
*/

/*
void readInput (string pointer[])  // replaces above line version for array of strings
// this function does not return any values, etc

{
    for (int i = 0; i < 4; i++)
    {
        getline(stringin, observation)  ; // read in four lines
        pointer++;
    } //  end of for loop

} // end of readInput function

 */

 int main(int argc, const char *argv[])
{
 //   FILE* spOutput;
    
  ofstream stringout("/Users/Charles/Desktop/common_files/string-out.txt");
    // this does create string-out.txt in the correct directory
    
    ifstream stringin("/Users/Charles/Desktop/common_files/string-in.txt") ;
    
    string observation[] = {"aaa", "bbb", "ccc", "ddd"}; // should overwrite with values in file

    vector<string> v = {"Fred", "Wilma", "Barney", "Betty"};

    writeOutput(v);  // call function writeOutput
    
  //  writeOutput(observation);  // call function writeOutput
    stringout.close();
    stringin.close();
    return 0;

} // end of main
