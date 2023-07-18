#include "gtkmm.h"
#include "Window/Window.hpp"

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create(argc,argv,"main.window");
    Window main_window("Cockpit Display", 300,300);
    return app->run(main_window);

}