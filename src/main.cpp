#include<iostream>
#include<ftxui/screen/screen.hpp>
#include<ftxui/dom/elements.hpp>
#include<thread>
#include<string>
#include<fstream>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[]){

    fstream archivo;
    archivo.open("./assets/images/nave.txt");
    string nave;
    archivo >> nave;
    archivo.close();

    int fotograma = 0;
    while(true){
        this_thread::sleep_for(0.001s);
        fotograma++;

	    Element personaje = spinner(21, fotograma) | bold | color(Color::Green) | bgcolor(Color::Red);
        Element nNave = text(nave);
        Element dibujo = hbox({personaje, nNave});
	    Screen pantalla = Screen::Create(Dimension::Full());
	    Render(pantalla, dibujo);
	    pantalla.Print();
        cout<<pantalla.ResetPosition();

    } 

	return EXIT_SUCCESS;
}