#ifndef MPC_H
#define MPC_H

#define HAVE_CSTDDEF

#include <vector>
#include "Eigen-3.3/Eigen/Core"

using namespace std;

class MPC
{
public:
  MPC();

  virtual ~MPC();

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuations.
  vector<double> Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);

  // vectors for the estimated path
  std::vector<double> solution_x_;
  std::vector<double> solution_y_;
};

#endif /* MPC_H */
