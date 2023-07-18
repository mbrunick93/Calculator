#include "Window.hpp"

Window::Window()
{
    set_title("Default Title");
    set_default_size(200,200);
}

Window::Window(std::string title, int width, int height)
{
    set_title(title);
    set_default_size(width,height);
}