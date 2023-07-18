#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <gtkmm/window.h>
#include <string>

class Window: public Gtk::Window
{
    public:
    Window();
    Window(std::string title, int width, int height);

};

#endif