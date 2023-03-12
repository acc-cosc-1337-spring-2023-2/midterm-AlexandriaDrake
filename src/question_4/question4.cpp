// //
// bool test_config()
// {
//     return true;
// }

//add include statements

#include "question4.h"
#include <iostream>
#include <string>

using namespace std;


string transcribe_dna_into_rna(string dna) 
{
    string rna = "";
    for (int i = 0; i < dna.length(); i++) 
    {
        if (dna[i] == 'T') 
        {
            rna += 'U';
        } else {
            rna += dna[i];
        }
    }
    return rna;
}

