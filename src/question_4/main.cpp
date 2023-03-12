
#include"question4.h"
#include<iostream>
#include <string>

using namespace std;

int main() 
{
    string dna = "GATGGAACTTGACTACGTAAATT";
    string rna = transcribe_dna_into_rna(dna);
    cout<<"\n\n"<<rna<<"\n\n";
    return 0;
}
