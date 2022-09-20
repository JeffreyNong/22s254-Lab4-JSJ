#include "function.h"
#include <iostream>
#include <fstream>

using namespace std;


string readme(string filename) {
    
    ifstream newfile;

    newfile.open(filename);
    string line;
    string txt;
    while (getline(newfile, line)){
        txt.append(line);
        txt.append("\n");
    }


    cout << txt << endl;
    return txt;
}

