#include "CalculatorSignal.hpp"

void CalculatorSignal::buttonZeroClicked() 
{
    calcCompute.SetCurrentValue(0);
}

void CalculatorSignal::buttonOneClicked() 
{
    calcCompute.SetCurrentValue(1);
}

void CalculatorSignal::buttonTwoClicked() 
{
    calcCompute.SetCurrentValue(2);
}
void CalculatorSignal::buttonThreeClicked() 
{
    calcCompute.SetCurrentValue(3);
}
void CalculatorSignal::buttonFourClicked() 
{
    calcCompute.SetCurrentValue(4);
}
void CalculatorSignal::buttonFiveClicked() 
{
    calcCompute.SetCurrentValue(5);
}
void CalculatorSignal::buttonSixClicked() 
{
    calcCompute.SetCurrentValue(6);
}
void CalculatorSignal::buttonSevenClicked() 
{
    calcCompute.SetCurrentValue(7);
}
void CalculatorSignal::buttonEightClicked() 
{
    calcCompute.SetCurrentValue(8);
}
void CalculatorSignal::buttonNineClicked() 
{
    calcCompute.SetCurrentValue(9);
}

void CalculatorSignal::buttonAddClicked()
{
    calcCompute.Add();
}
void CalculatorSignal::buttonSubClicked()
{
    calcCompute.Sub();
}
void CalculatorSignal::buttonMultiClicked()
{
    calcCompute.Multiply();
}
void CalculatorSignal::buttonDivideClicked()
{
    calcCompute.Divide();
}
void CalculatorSignal::buttonEqualClicked() 
{
    int temp = calcCompute.Equal();
    std::string labelString = std::to_string(temp);
    p_label->set_text(labelString);
}
void CalculatorSignal::buttonClearClicked() 
{
    calcCompute.Clear();
    int temp = calcCompute.Equal();
    std::string labelString = std::to_string(temp);
    p_label->set_text(labelString);
}

void CalculatorSignal::passLabelPointer(Gtk::Label *label)
{
    p_label = label;
}