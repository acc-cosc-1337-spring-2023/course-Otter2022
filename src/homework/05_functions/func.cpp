//add include statements
#include "func.h"
using std::string;

//add function code here

double get_gc_content(const string &dna){
    double length = dna.size();
    double numGsAndCs = 0;
    for(char ch: dna){
        if(ch == 'G' || ch == 'C'){
            numGsAndCs++;
        }
    }
    return numGsAndCs/length;
}

string reverse_string(string dna){
    auto length = dna.size();
    string reverse = dna;
    int counter = 0;
    for (auto i = (length-1); i >= 0; i--){
        reverse[counter] = dna[length];
    }
    return reverse;
}

string get_dna_complement(string dna){
    string reverse = reverse_string(dna);
    for(char &ch: reverse){
        if(ch == 'G'){
            ch = 'T';
        } if(ch == 'T'){
            ch = 'G';
        } if(ch == 'C'){
            ch = 'A';
        } if(ch == 'A'){
            ch = 'C';
        } 
    }
    return reverse;
}