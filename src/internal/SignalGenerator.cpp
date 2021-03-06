#include <bits/stdc++.h>
#include <hyro/SignalGenerator.h>

namespace hyro 
{

SignalGenerator::SignalGenerator()
  : m_deg(0.0)
  , m_step(0.0)
  , m_amp(0.0)
{
}

double SignalGenerator::getSignalValue()
{
  double rad = m_deg / 180.0 * M_PI;
  m_deg += m_step;
  
  if (m_cosine == function::cosine) 
    return m_amp * cos(rad);

  return  m_amp * sin(rad);
}

}