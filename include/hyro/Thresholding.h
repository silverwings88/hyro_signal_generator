#pragma once

#ifndef THRESHOLDING_H
#define THRESHOLDING_H

#include <bits/stdc++.h>

namespace hyro
{

class Thresholding 
{
  private:

    double m_amplitude, m_threshold;

  public:

    Thresholding();
    double calculateThreshold(double value);
    double getThreshold();
    void setThreshold(double th);
    void setAmplitude(double amp);
    double getAmplitude();
};

}
#endif