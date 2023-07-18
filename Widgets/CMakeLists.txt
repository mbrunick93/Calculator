file(GLOB SOURCES "./Buttons/*.cpp"
                  "./Range/*.cpp"  
)
add_library(WidgetLibrary STATIC ${SOURCES} )




