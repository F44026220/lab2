#ifndef ELO_H

#define ELO_H
#include<cmath>

class Elo {

  public:
     void setA(int,float);
     void setB(int,float);
     void setK(int);
     float scoreE(int,int);
     int getA();
     int getB();

  private:
     int K;
     int R_A;
     int R_B;
     float S_A;
     float S_B;
     float E_A;
     float E_B;
};

#endif

