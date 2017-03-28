#include"Elo.h"

void Elo::setK(int K_value)
{
 K=K_value;
}

void Elo::setA(int A, float S)
{
 R_A=A;
 S_A=S;
}

void Elo::setB(int B, float S)
{
 R_B=B;
 S_B=S;
}

float Elo::scoreE(int Rself, int Rother)
{
 return 1/(1+pow(static_cast<float>(10),static_cast<float>(Rother-Rself)/400)); 
}

int Elo::getA()
{
 float rate;

 E_A=scoreE(R_A, R_B);
 rate=R_A+K*(S_A-E_A);
 if (rate-(int)rate>=0.5)
    return (int)rate+1;
 else
    return (int)rate;
}

int Elo::getB()
{
 float rate;

 E_B=scoreE(R_B, R_A);
 rate=R_B+K*(S_B-E_B);
 if (rate-(int)rate>=0.5)
    return (int)rate+1;
 else
    return (int)rate;
}

