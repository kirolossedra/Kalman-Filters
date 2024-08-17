#include <iostream>
#include <eigen3/Eigen/Dense>
#include "ukf.h"

using Eigen::MatrixXd;
using Eigen::VectorXd;

int main() {

  // Create a UKF instance
  UKF ukf;

  /**
   * 1.Generate sigma points
   **/
  MatrixXd Xsig1 = MatrixXd(5, 11);
  //ukf.GenerateSigmaPoints(&Xsig1);
  
  
  /**
   * 2.Generate augmented sigma points
   **/
   //MatrixXd Xsig2 = MatrixXd(7, 15);
   //ukf.AugmentedSigmaPoints(&Xsig2);
   
   
   
   /**
   * 3.Predict augmented sigma points
   **/
   //MatrixXd Xsig2 = MatrixXd(7, 15);
   //ukf.AugmentedSigmaPoints(&Xsig2);
   
    // create matrix with predicted sigma points as columns
  //MatrixXd Xsig_pred = MatrixXd(5, 2 * 7 + 1);
  //ukf.SigmaPointPrediction(&Xsig_pred);
  
  
   /**
   * 4.Predicted mean and covariance
   **/
  
  
   // create vector for predicted state
  //VectorXd x = VectorXd::Zero(5);

  // create covariance matrix for prediction
  //MatrixXd P = MatrixXd::Zero(5,5);
  
  
  //ukf.PredictMeanAndCovariance(&x,&P);
  
  
    /**
   * 5.Predicted Radar mean and covariance
   **/
  
  
   // create vector for predicted state
  VectorXd x = VectorXd::Zero(5);

  // create covariance matrix for prediction
  MatrixXd P = MatrixXd::Zero(5,5);
  
  
  //ukf.PredictRadarMeasurement(&x,&P);
  
    /**
   * 6.Update Radar mean and covariance
   **/
  
  
     ukf.UpdateState(&x,&P);
  
  
  
  


  return 0;
}
