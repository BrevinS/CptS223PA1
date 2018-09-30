#include <cstdlib>
#include "list.h"
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <chrono>
#include <cmath>
//#include <ifstream>

using namespace std;
using namespace chrono;
//using std::chrono::duration_cast;
//NOTE: Run program with `g++ main.cpp list.cpp -o test` then `./test`
//Compile .cpp files for running
//
using std::cout;

int main(int argc, char *argv[]){
List Brevin;
ifstream infile;

  cout << "Please enter the input file name> " << flush;
  while (true)
    {
    string infilename;
    getline( cin, infilename );
    infile.open( infilename.c_str() );
    if (infile) break;
    cout << "Invalid file. Please enter a valid input file name> " << flush;
    }

string temp;
auto start = high_resolution_clock::now();
while(getline(infile, temp)){
Brevin.insertNode(stoi(temp));
temp = "";
}
auto stop = high_resolution_clock::now();
auto duration = duration_cast<nanoseconds>(stop - start);
cout << "time_insert: " << duration.count() << " nanoseconds" << endl;

auto start2 = high_resolution_clock::now();
//cout << "Finding Min..." << endl;
cout << "Mimimum: " << Brevin.findMin() << endl;
auto stop2 = high_resolution_clock::now();
auto duration2 = duration_cast<nanoseconds>(stop2 - start2);
cout << "time_min: " << duration2.count() << " nanoseconds" << endl;

auto start1 = high_resolution_clock::now();
//cout << "Finding Max..." << endl;
cout << "Maximum: " << Brevin.findMax() << endl;
auto stop1 = high_resolution_clock::now();
auto duration1 = duration_cast<nanoseconds>(stop1 - start1);
cout << "time_max: " << duration1.count() << " nanoseconds" << endl;

auto start3 = high_resolution_clock::now();
//cout << "Finding Med..." << endl;
cout << "Median: " << Brevin.findMed() << endl;
auto stop3 = high_resolution_clock::now();
auto duration3 = duration_cast<nanoseconds>(stop3 - start3);
cout << "time_med: " << duration3.count() << " nanoseconds" << endl;

return 0;
}
