#ifndef CALCULATOR_SIGNAL_HPP
#define CALCULATOR_SIGNAL_HPP

#include "CalculatorCompute.hpp"
#include "sigc++/sigc++.h"
#include "gtkmm/label.h"
#include <stdio.h>

class CalculatorSignal : public sigc::trackable
{
    public:
        void buttonZeroClicked();
        void buttonOneClicked();
        void buttonTwoClicked();
        void buttonThreeClicked();
        void buttonFourClicked();
        void buttonFiveClicked();
        void buttonSixClicked();
        void buttonSevenClicked();
        void buttonEightClicked();
        void buttonNineClicked();

        void buttonAddClicked();
        void buttonSubClicked();
        void buttonMultiClicked();
        void buttonDivideClicked();

        void buttonEqualClicked(); 
        void buttonClearClicked();

        void passLabelPointer(Gtk::Label *label);

    private:
        CalculatorCompute calcCompute;
        Gtk::Label *p_label = nullptr;    
};
#endif