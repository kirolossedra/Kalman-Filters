#include <eigen3/Eigen/Dense>
#include <cmath>

/** 
 * Write a function 'filter()' that implements a multi-
 *   dimensional Kalman Filter for the example given
 */ 

#include <iostream>
#include <vector>

using namespace std;
using std::cout;
using std::endl;
using std::vector;
using Eigen::VectorXd;
using Eigen::MatrixXd;



void CalculateJacobian(VectorXd &x);



int main() {

  VectorXd x(4);
  
  x<<1,2,0.2,0.4;
  



  CalculateJacobian(x);

  return 0;
}

void CalculateJacobian(VectorXd &x) {

  MatrixXd Hj(3,4);
  
  float px = x(0);
  float py = x(1);
  float vx = x(2);
  float vy = x(3);
  
  if(abs(px*py+py*py)==0){
  cout<<"Division by zero";
  return;
  }
  
  Hj(0,0) = px/sqrt(px*px+py*py);
  
  Hj(0,1) = py/sqrt(px*px+py*py);
  
  Hj(0,2) = 0 ;
  
  Hj(0,3) = 0;
  
   Hj(1,0) = -py/(px*px+py*py);
   
   Hj(1,1) = px/(px*px+py*py);
   
   
   Hj(1,2) = 0 ;
  
  Hj(1,3) = 0;
  
  Hj(2,0) = py* (vx*py - vy*px )/(pow(px*px+py*py,1.5));
  Hj(2,1) = px* (vy*px- vx*py )/(pow(px*px+py*py,1.5));
  Hj(2,2) = px/sqrt(px*px+py*py);
  
  Hj(2,3) = py/sqrt(px*px+py*py);
  
  
  cout<<"Hj is :"<<Hj<<endl;
  
  
  


}







