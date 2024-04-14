Para compilar se tienen que poner estos 4 comandos en el terminal.
g++ -c funciones.cpp -o funciones.o
g++ -c logica_piezas.cpp -o logica_piezas.o
g++ -c main.cpp -o main.o
g++ main.o funciones.o logica_piezas.o -o mi_programa
luego, ya estara compilado, para correrlo se debe poner el siguiente comando en el terminal.
./mi_programa