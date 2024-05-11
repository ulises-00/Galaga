output = bin/
source = src
include = -Include
dependencias = -lfxui-screen -lfxui-dom -lfxui-component
flags = -std=c++2a $(dependencias) $(include)

run : $(output)/galaga
	./$<

$(output)/galaga : $(source)/main.cpp
	g++ -o $@ $< $(flags)

runPantalla : $(output)/pantalla
	./$<

$(output) /pantalla : $(source)/pantalla.cpp
	g++ -o $@ $< $(flags)