#include <iostream>
#include <fstream>
#include "file_stream/file_stream.h"

using namespace std;

void write_to_file(void)
{
    ofstream fout;

    fout.open("../file_stream/outfile.txt");
    if(fout.fail())
    {
        cout << "Error opening outfile.txt" << endl;
        exit(1);
    }

    fout << "Jai Sri Ram!" << endl;
    fout << "Jai Jai Sri Ram" << endl;

    fout.close();
}

void read_from_file(void)
{
    ifstream fin;

    fin.open("../file_stream/infile.txt");
    if(fin.fail())
    {
        cout << "Error opening outfile.txt" << endl;
        exit(1);
    }

    char a;
    while(!fin.eof())
    {
        fin >> a;
        cout << a << " ";
    }
    cout << endl;

    fin.close();
}
