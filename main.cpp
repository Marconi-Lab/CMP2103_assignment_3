#include <iostream>
#include <cmath>
// Choose proper variable names
// Remember to define variables with the right data types
using namespace std;
float RC_current( float E, float R, float C, float t ) {
    const float e = 2.71828;
    float current_0 = E/R;
    float time_constant = -t/(R*C);
    float expon = pow(e,time_constant);
    float I = current_0 * expon;
  // Put your code here
  return I;
}

//int main(){
//cout<<RC_current(6,100,0.026,1.4)<<endl;
//cout<<RC_current(15,20,0.055,0.067)<<endl;
//cout<<RC_current(35,50,0.016,0.11)<<endl;
//cout<<RC_current(5,1,0.016,0.11)<<endl;
//cout<<RC_current(10,50.4,0.16,2.11)<<endl;
//}

