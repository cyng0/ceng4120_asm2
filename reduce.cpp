#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[]){
    const string in_file = "./gen0_in.txt";
    const string out_file = "./gen0_out.txt";
    if (argc < 3 || argc > 4){
        cout << "usage: reduce " << in_file << " " << out_file << "\n";
        exit(1);
    }
    char *inFile = argv[1];
    char *outFile = argv[2];
    char *logFile = (argc == 4 ? argv[3] : NULL);
    return 0;
}
