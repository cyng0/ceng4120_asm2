#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

#define POS     0
#define NEG     1
#define DC      2 

void print_array(string array[], int length, int var_length){
    cout << "[";
    for(int i = 0; i<length; i++){
        cout << " " << array[i] << " ";
    }
    cout << "]\n";
}

bool check_unate(string arr[]){

}

int main(int argc, char *argv[]){
    //argc: no. of arguments
    //argv: segments of the command: 0: call file, 1: arg1, 2: arg2, 3: arg3
    cout <<"Input file:  " << argv[1]  << "\n";
    cout <<"Output file: " << argv[2]  << "\n";
    const char* in_file = argv[1];
    ifstream in_file_stream;
    in_file_stream.open(in_file, ios::in);
    const char* out_file = argv[2];
    ifstream out_file_stream;
    out_file_stream.open(out_file, ios::out);
    if (argc < 3 || argc > 4){
        cout << "Reduce function error: incorrect numbers of arguments\n";
        exit(1);
    }
    char *inFile = argv[1];
    char *outFile = argv[2];
    char *logFile = (argc == 4 ? argv[3] : NULL);

    //read from file
    while(!in_file_stream.eof()){
        string first_input;
        string second_input;
        getline(in_file_stream, first_input);
        getline(in_file_stream, second_input);
        int no_of_variables = stoi(first_input);
        int no_of_cubes = stoi(second_input);
        for(int i = 0; i<no_of_cubes; i++){
            string value;
            getline(in_file_stream, value);
            cout << value << "\n";
        }
        if(!in_file_stream.eof()){
            break;
        }
    }
    in_file_stream.close();
    out_file_stream.close();
    return 0;
}