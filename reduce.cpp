#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]){
    cout <<"Value of argc: " << argc << "\n";
    cout <<"Value of argv: " << *argv << "\n";
    const char* in_file = "./gen0_in.txt";
    ifstream in_file_stream;
    in_file_stream.open(in_file, ios::in);
    const char* out_file = "./gen0_out.txt";
    ifstream out_file_stream;
    out_file_stream.open(out_file, ios::out);
    if (argc < 3 || argc > 4){
        cout << "usage: reduce " << in_file << " " << out_file << "\n";
        exit(1);
    }
    char *inFile = argv[1];
    char *outFile = argv[2];
    char *logFile = (argc == 4 ? argv[3] : NULL);
    in_file_stream.close();
    out_file_stream.close();
    return 0;
}
