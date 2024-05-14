#include<iostream>
#include<thread>
#include<ftxui/screen/screen.hpp>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[]){
    Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());

    int x = 0;
    while(true){    
        x++;
        pantalla.Clear();
        this_thread::sleep_for(0.01s);

         pantalla.PixelAt(x, 5).character = "      ___             ___             ___             ___             ___        ";
         pantalla.PixelAt(x, 6).character = "  ___|   |___     ___|   |___     ___|   |___     ___|   |___     ___|   |___    ";
         pantalla.PixelAt(x, 7).character = " |   '---'   |   |   '---'   |   |   '---'   |   |   '---'   |   |   '---'   |   ";
         pantalla.PixelAt(x, 8).character = " '--_______--'   '--_______--'   '--_______--'   '--_______--'   '--_______--'   ";
         pantalla.PixelAt(x, 10).character = "     ___             ___             ___             ___             ___        ";
         pantalla.PixelAt(x, 11).character = " ___|   |___     ___|   |___     ___|   |___     ___|   |___     ___|   |___    ";
         pantalla.PixelAt(x, 12).character = "|   '---'   |   |   '---'   |   |   '---'   |   |   '---'   |   |   '---'   |   ";
         pantalla.PixelAt(x, 13).character = "'--_______--'   '--_______--'   '--_______--'   '--_______--'   '--_______--'   ";
         pantalla.PixelAt(x, 15).character = "     ___             ___             ___             ___             ___        ";
         pantalla.PixelAt(x, 16).character = " ___|   |___     ___|   |___     ___|   |___     ___|   |___     ___|   |___    ";
         pantalla.PixelAt(x, 17).character = "|   '---'   |   |   '---'   |   |   '---'   |   /   '---'   |   |   '---'   |   ";
         pantalla.PixelAt(x, 18).character = "'--_______--'   '--_______--'   '--_______--'   '--_______--'   '--_______--'   ";
         pantalla.PixelAt(x, 20).character = "     ___             ___             ___             ___             ___        ";
         pantalla.PixelAt(x, 21).character = " ___|   |___     ___|   |___     ___|   |___     ___|   |___     ___|   |___    ";
         pantalla.PixelAt(x, 22).character = "|   '---'   |   |   '---'   |   |   '---'   |   |   '---'   |   /   '---'   |   ";
         pantalla.PixelAt(x, 23).character = "'--_______--'   '--_______--'   '--_______--'   '--_______--'   '--_______--'   ";     
         pantalla.PixelAt(x, 25).character = "     ___             ___             ___             ___             ___        ";
         pantalla.PixelAt(x, 26).character = " ___|   |___     ___|   |___     ___|   |___     ___|   |___     ___/   |___    ";
         pantalla.PixelAt(x, 27).character = "|   '---'   |   |   '---'   |   |   '---'   |   |   '---'   |   |   '---'   |   ";
         pantalla.PixelAt(x, 28).character = "'--_______--'   '--_______--'   '--_______--'   '--_______--'   '--_______--'   ";
         pantalla.PixelAt(x, 30).character = "                                     ooo                                        ";
         pantalla.PixelAt(x, 31).character = "                                    | : |                                       ";
         pantalla.PixelAt(x, 32).character = "                                   | o0o |                                      ";
         pantalla.PixelAt(x, 33).character = "                             _____|.-----.|_____                                ";
         pantalla.PixelAt(x, 34).character = "                             |###|U *   * U|###|                                ";
         pantalla.PixelAt(x, 35).character = "                              |...!(.>..<)!...|                                 ";
         pantalla.PixelAt(x, 36).character = "                               ^^^^o|   |o^^^^                                  ";
         pantalla.PixelAt(x, 37).character = "                           #+=====}:^^^^^:{=====+#                              ";
         pantalla.PixelAt(x, 38).character = "                            .____  .|!!!|.  ____.                               ";
         pantalla.PixelAt(x, 39).character = "                            |#####:("   ") #####|                               ";
         pantalla.PixelAt(x, 40).character = "                            |#####_.  O  ._#####|                               ";
         pantalla.PixelAt(x, 41).character = "                            |#####_:     :_#####|                               ";
         pantalla.PixelAt(x, 42).character = "                             ^^^^^   : :   ^^^^^                                ";

        pantalla.Print();
        cout<< pantalla.ResetPosition();
    }

    return 0;
}