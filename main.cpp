#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"Elo.h"
using namespace std;

int main()
{
 int R_A, R_B, K;
 float S_A, S_B;
 Elo Elo1;

 string trash;
 ifstream inFile("file.in", ios::in);
 if (!inFile) {
    cerr<<"Failed opening"<<endl;
    exit(1);
   }
 ofstream outFile("file.out", ios::out);
 if (!outFile) {
    cerr<<"Failed opening"<<endl;
    exit(1);
   }

 getline(inFile, trash); //A line needless
 
 inFile >> K >> R_A >> R_B;
 Elo1.setK(K);
 outFile << "R_A" << "\t" << "R_B" << endl;
 outFile << R_A << "\t" << R_B << endl;
 while (inFile >> S_A) {
    Elo1.setA(R_A, S_A);
    Elo1.setB(R_B, 1-S_A);
    R_A=Elo1.getA();
    R_B=Elo1.getB();
    outFile << R_A << "\t" << R_B << endl;   
   }

 return 0;
}
