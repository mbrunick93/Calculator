#include <iostream>
#include "gtkmm.h"
#include "CalculatorSignal.hpp"

static void oneButtonClicked();

int main(int argc, char *argv[])
{
    CalculatorSignal calcSignal;
    Gtk::Button *p_oneButton     = nullptr;
    Gtk::Button *p_twoButton     = nullptr;
    Gtk::Button *p_threeButton   = nullptr;
    Gtk::Button *p_fourButton    = nullptr;
    Gtk::Button *p_fiveButton    = nullptr;
    Gtk::Button *p_sixButton     = nullptr;
    Gtk::Button *p_sevenButton   = nullptr;
    Gtk::Button *p_eightButton   = nullptr;
    Gtk::Button *p_nineButton    = nullptr;
    Gtk::Button *p_zeroButton    = nullptr;
    Gtk::Button *p_clearButton   = nullptr;
    Gtk::Button *p_paraButton    = nullptr;
    Gtk::Button *p_percentButton = nullptr;
    Gtk::Button *p_divideButton  = nullptr;
    Gtk::Button *p_multiButton   = nullptr;
    Gtk::Button *p_addButton     = nullptr;
    Gtk::Button *p_subButton     = nullptr;
    Gtk::Button *p_equlButton    = nullptr;
    Gtk::Button *p_signButton    = nullptr;
    Gtk::Button *p_dotButton     = nullptr;
    Gtk::Label  *p_label         = nullptr;
    Gtk::Window *p_mainWindow    = nullptr;
    
    Glib::RefPtr<Gtk::Application>  app = Gtk::Application::create(argc, argv, "org.mbrunic.calculator");
    Glib::RefPtr<Gtk::Builder>      p_Builder = Gtk::Builder::create();

    try
    {
        p_Builder->add_from_file("../Resources/calculator.glade");
    }
    catch(const Glib::FileError& ex)
    {
        std::cerr << "FileError: " << ex.what() << std::endl;
        return 1;
    }
    catch(const Glib::MarkupError& ex)
    {
        std::cerr << "MarkupError: " << ex.what() << std::endl;
        return 1;
    }
    catch(const Gtk::BuilderError& ex)
    {
        std::cerr << "BuilderError: " << ex.what() << std::endl;
        return 1;
    }

    p_Builder->get_widget( "mainWindow",p_mainWindow );
    
    if( p_mainWindow )
    {
        p_Builder->get_widget( "answerLabel",p_label );
        p_Builder->get_widget( "clearButton",p_clearButton );
        p_Builder->get_widget( "sevenButton",p_sevenButton );
        p_Builder->get_widget( "fourButton",p_fourButton );
        p_Builder->get_widget( "parenthesesButton",p_paraButton );
        p_Builder->get_widget( "percentButton",p_percentButton );
        p_Builder->get_widget( "divideButton",p_divideButton );
        p_Builder->get_widget( "eightButton",p_eightButton );
        p_Builder->get_widget( "fiveButton",p_fiveButton );
        p_Builder->get_widget( "twoButton",p_twoButton );
        p_Builder->get_widget( "nineButton",p_nineButton );
        p_Builder->get_widget( "multiButton",p_multiButton );
        p_Builder->get_widget( "sixButton",p_sixButton );
        p_Builder->get_widget( "threeButton",p_threeButton );
        p_Builder->get_widget( "minusButton",p_subButton );
        p_Builder->get_widget( "plusButton",p_addButton );
        p_Builder->get_widget( "signButton",p_signButton );
        p_Builder->get_widget( "zeroButton",p_zeroButton );
        p_Builder->get_widget( "periodButton",p_dotButton );
        p_Builder->get_widget( "equalButton",p_equlButton );
        p_Builder->get_widget( "oneButton",p_oneButton );
    }

    if( p_label )
    {
        calcSignal.passLabelPointer( p_label );
    }

    if( p_zeroButton )
    {
        p_zeroButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonZeroClicked) );
    }

    if( p_oneButton )
    {
        p_oneButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonOneClicked) );
    }

    if( p_twoButton )
    {
        p_twoButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonTwoClicked) );
    }

    if( p_threeButton )
    {
        p_threeButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonThreeClicked) );
    }

    if( p_fourButton )
    {
        p_fourButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonFourClicked) );
    }

    if( p_fiveButton )
    {
        p_fiveButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonFiveClicked) );
    }

    if( p_sixButton )
    {
        p_sixButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonSixClicked) );
    }

    if( p_sevenButton )
    {
        p_sevenButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonSevenClicked) );
    }

    if( p_eightButton )
    {
        p_eightButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonEightClicked) );
    }

    if( p_nineButton )
    {
        p_nineButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonNineClicked) );
    }

    if( p_addButton )
    {
        p_addButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonAddClicked ) );
    }

    if( p_subButton )
    {
       p_subButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonSubClicked ) ); 
    }

    if( p_multiButton)
    {
        p_multiButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonMultiClicked ) );      
    }

    if( p_divideButton)
    {
        p_divideButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonDivideClicked ) );      
    }

    if( p_equlButton ) 
    {
        p_equlButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonEqualClicked ) );
    }

    if(p_clearButton)
    {
        p_clearButton->signal_clicked().connect( sigc::mem_fun(calcSignal, &CalculatorSignal::buttonClearClicked ) );
    }

    app->run(*p_mainWindow);
}
