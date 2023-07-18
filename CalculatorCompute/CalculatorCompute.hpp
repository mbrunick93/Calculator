#ifndef CALCULATOR_COMPUTE_HPP
#define CALCULATOR_COMPUTE_HPP

class CalculatorCompute
{
    public:
        CalculatorCompute();
        void SetCurrentValue(int currentValue);
        int Equal() const;
        void Add();
        void Sub();
        void Multiply();
        void Divide();
        void Clear();        
    private:
        int m_currentValue = 0;
        int m_totalValue = 0;
};
#endif