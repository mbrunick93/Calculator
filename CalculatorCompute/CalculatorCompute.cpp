#include "CalculatorCompute.hpp"

CalculatorCompute::CalculatorCompute() = default;

void CalculatorCompute::SetCurrentValue(int CurrentValue)
{
   m_currentValue = CurrentValue;
   if(m_totalValue == 0)
   {
        m_totalValue = m_currentValue;
   }
}

void CalculatorCompute::Add()
{
    m_totalValue += m_currentValue;
}

void CalculatorCompute::Sub()
{
    m_totalValue -= m_currentValue;
}

void CalculatorCompute::Multiply()
{
    m_totalValue *= m_currentValue;
}

void CalculatorCompute::Divide()
{
    m_totalValue /= m_currentValue;
}

void CalculatorCompute::Clear()
{
    m_totalValue = 0;
}

int CalculatorCompute::Equal() const 
{
    return m_totalValue;
}
