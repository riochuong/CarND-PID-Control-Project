#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    this->Kp = Kp;
    this->Kd = Kd;
    this->Ki = Ki;
    prev_d_error = 0;
}

void PID::UpdateError(double cte) {
   p_error = cte;
   d_error = cte - prev_d_error;
   i_error += cte;
   prev_d_error = cte;
}

double PID::TotalError() {
    return (-Kp * p_error - Kd * d_error - Ki * i_error);
}

double PID::UpdateParams(const vector<double> &p) {
    this->Kp = p[0];
    this->Kd = p[1];
    this->Ki = p[2];
    return this->TotalError();
}

