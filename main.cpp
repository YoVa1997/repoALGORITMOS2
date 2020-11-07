#include <cstdlib>
#include <iostream>
#include <string.h>
#include <functional>
#include <stdio.h>
#include <conio.h>
#include <vector>

#define ENTER 13
#define BACKSPACE 8

using namespace std;


struct fecha{
        int dia;
        int mes;
        int anyo;
};


struct jugador{
        char nombre[80];
        struct fecha fechaNacimiento;
        int ficha;
        char posicion[20];
        int puntosLiga;
        int ultimosEquipos [3];
};


struct equipo{
        char nombre[80];
        char ciudad[80];
        struct jugador plantilla[21];
        int PO;
	    int CLUB;
		int PJ;
		int PG;
		int PE;
		int PP;
		int PTS;
} futbol  [3][1];


struct jugadores{
        char nombre[80];
        struct fecha fechaNacimiento;
        int ficha;
        char posicion[20];
        int puntosLiga;
        char equipo[80];
};


//muestra la fecha contenida en un struct fecha
void mostrarFecha (struct fecha fecha){


        cout<< fecha.dia <<"/"<< fecha.mes<<"/"<< fecha.anyo;


}


//copia un struct fecha "origen" en un struct fecha "destino"
void copyfecha (struct fecha &origen, struct fecha &destino){

        destino.dia = origen.dia;
        destino.mes = origen.mes;
        destino.anyo = origen.anyo;

}

equipo equipo [20] = { {"1.  Real Madrid", "1.  Real Madrid",        {{"Courtois", {27, 6, 75}, 11000000, "Portero", 108, {3,12,16}},
                                                              {"Raphael Varane", {10, 6, 83}, 9000000,  "Defensa", 97, {2,12,18}},
                                                              {"Eder Militao", {12, 12, 80}, 11000000, "Defensa", 67, {1,10,12}},
                                                              {"Sergio Ramos", {18, 9, 82}, 9000000, "Defensa", 25, {4,16,2}},
                                                              {"Nacho", {10, 9, 83}, 10000000, "Defensa", 92, {3,4,19}},
                                                              {"Mendy", {26, 6, 75}, 10000000, "Defensa", 79, {5,7,10}},
                                                              {"Marcelo", {18, 1, 77}, 11000000, "Defensa", 106, {6,9,14}},
                                                              {"Carvajal", {21, 8, 83}, 7000000, "Defensa", 25, {7,11,17}},
                                                              {"Casemiro", {30, 3, 80}, 12000000, "Centrocampista", 14, {1,10,2}},
                                                              {"Kroos", {2, 6, 79}, 13000000, "Centrocampista", 97, {7,8,16}},
                                                              {"Valverde", {15, 2, 81}, 11000000, "Centrocampista", 93, {18,8,9}},
                                                              {"Modric", {21, 5, 85}, 11000000, "Centrocampista", 73, {13,12,19}},
                                                              {"Isco", {30, 4, 89}, 9000000, "Centrocampista", 83, {3,2,6}},
                                                              {"Odegaard", {1, 11, 90}, 13000000, "Centrocampista", 118, {1,16,19}},
                                                              {"Hazard", {28, 10, 84}, 10000000, "Delantero", 82, {13,10,11}},
                                                              {"Vinicius", {12, 1, 86}, 15000000, "Delantero", 99, {14,15,16}},
                                                              {"Asensio", {26, 4, 89}, 9000000, "Delantero", 1, {7,19,2}},
                                                              {"Rodrygo", {25, 12, 90}, 13000000, "Delantero", 81, {8,12,9}},
                                                              {"Benzema", {17, 9, 91}, 10000000, "Delantero", 1, {9,19,12}},
                                                              {"Vazquez", {6, 7, 86}, 7000000, "Delantero", 1, {13,14,2}}
                                                             }
                                      },
                                      {"2.  Barcelona", "2.  Barcelona", {{"Ter Stegen", {26, 5, 74}, 10000000, "Portero", 1, {11,15,2}},
                                                                         {"Neto", {2, 6, 85}, 24000000, "Portero", 6, {3,10,5}},
                                                                         {"Pique", {9, 5, 82}, 16000000,  "Defensa", 135, {11,17,0}},
                                                                         {"Araujo", {11, 11, 79}, 18000000, "Defensa", 147, {9,11,0}},
                                                                         {"Lenglet", {17, 8, 81}, 12000000, "Defensa", 25, {3,15,19}},
                                                                         {"Alba", {9, 8, 82}, 15000000, "Defensa", 19, {2,3,0}},
                                                                         {"Umtiti", {25, 5, 74}, 11000000, "Defensa", 148, {4,6,9}},
                                                                         {"Firpo", {17, 12, 76}, 17000000, "Defensa", 142, {5,13,8}},
                                                                         {"Sergi Roberto", {20, 7, 82}, 1300000, "Defensa", 1, {6,10,16}},
                                                                         {"Busquets", {29, 2, 79}, 23000000, "Centrocampista", 105, {9,0,12}},
                                                                         {"Aleña", {1, 5, 78}, 12000000, "Centrocampista", 54, {6,15,7}},
                                                                         {"Pjanic", {14, 1, 80}, 14000000, "Centrocampista", 142, {7,17,8}},
                                                                         {"Puig", {20, 4, 84}, 13000000, "Centrocampista", 4, {12,11,18}},
                                                                         {"Coutinho", {29, 3, 88}, 16000000, "Centrocampista", 152, {5,0,2}},
                                                                         {"De Jong", {31, 10, 89}, 14000000, "Centrocampista", 44, {15,0,18}},
                                                                         {"Griezmann", {27, 9, 83}, 12000000, "Delantero", 41, {9,10,12}},
                                                                         {"Dembele", {11, 12, 85}, 13000000, "Delantero", 137, {13,14,15}},
                                                                         {"Trincao", {25, 3, 88}, 14000000, "Delantero", 115, {6,19,18}},
                                                                         {"Messi", {24, 11, 89}, 18000000, "Delantero", 104, {7,11,8}},
                                                                         {"Ansu Fati", {16, 8, 90}, 10000000, "Delantero", 9, {8,11,18}},
                                                                        }
                                      },
                                      {"3.  Juventus", "3.  Juventus", {{"Iago Herrerin", {28, 7, 76}, 10000000, "Portero", 2, {0,1,3}},
                                                                        {"Iraizoz", {4, 8, 87}, 12000000, "Portero", 9, {10,19,1}},
                                                                        {"Balenziaga", {11, 7, 84}, 10000000,  "Defensa", 78, {0,16,14}},
                                                                        {"Ekiza", {13, 1, 81}, 10000000, "Defensa", 1, {1,4,12}},
                                                                        {"Etxeita", {19, 10, 83}, 9000000, "Defensa", 1, {3,13,19}},
                                                                        {"Gurpegi", {11, 10, 84}, 10000000, "Defensa", 123, {6,13,0}},
                                                                        {"Iraola", {27, 7, 76}, 14000000, "Defensa", 130, {4,14,16}},
                                                                        {"Laporte", {19, 2, 78}, 10000000, "Defensa", 122, {7,11,12}},
                                                                        {"Saborit", {22, 9, 84}, 9000000, "Defensa", 7, {8,18,12}},
                                                                        {"Ander", {31, 4, 81}, 16000000, "Centrocampista", 90, {9,1,12}},
                                                                        {"Benat", {3, 7, 80}, 18000000, "Centrocampista", 88, {5,13,19}},
                                                                        {"De Marcos", {16, 3, 82}, 14000000, "Centrocampista", 110, {0,10,17}},
                                                                        {"Erik Moran", {22, 6, 86}, 10000000, "Centrocampista", 8, {0,13,14}},
                                                                        {"Ibai Gomez", {31, 5, 90}, 13000000, "Centrocampista", 81, {10,3,17}},
                                                                        {"Iturraspe", {2, 12, 91}, 12000000, "Centrocampista", 105, {0,1,13}},
                                                                        {"Mikel Rico", {29, 11, 85}, 12000000, "Centrocampista", 145, {6,12,19}},
                                                                        {"Muniain", {13, 2, 87}, 17000000, "Centrocampista", 124, {10,3,0}},
                                                                        {"Susaeta", {27, 5, 90}, 17000000, "Centrocampista", 130, {6,8,12}},
                                                                        {"Aduriz", {26, 1, 91}, 18000000, "Delantero", 104, {0,3,1}},
                                                                        {"Kike Sola", {18, 10, 92}, 15000000, "Delantero", 9, {15,13,12}},
                                                                        {"Toquero", {7, 8, 87}, 10000000, "Delantero", 72, {0,9,7}}
                                                                       }
                                      },
                                      {"4.  Levante", "4.  Levante", {{"Sergio", {24, 3, 85}, 10000000, "Portero", 1, {19,6,11}},
                                                                 {"Yoel", {31, 4, 83}, 12000000, "Portero", 97, {0,7,12}},
                                                                 {"Aurtenetxe", {7, 3, 80}, 10000000,  "Defensa", 61, {0,8,13}},
                                                                 {"Bellvis", {9, 9, 77}, 8000000, "Defensa", 1, {1,9,14}},
                                                                 {"Cabral", {15, 6, 79}, 11000000, "Defensa", 46, {2,10,15}},
                                                                 {"Costas", {7, 6, 80}, 8000000, "Defensa", 60, {3,11,16}},
                                                                 {"Fontas", {23, 3, 82}, 10000000, "Defensa", 80, {5,12,17}},
                                                                 {"Hugo Mallo", {15, 10, 74}, 10000000, "Defensa", 94, {6,13,18}},
                                                                 {"Jonny", {18, 5, 80}, 8000000, "Defensa", 32, {7,14,19}},
                                                                 {"Alex Lopez", {27, 12, 77}, 13000000, "Centrocampista", 127, {8,15,0}},
                                                                 {"Augusto", {30, 3, 76}, 12000000, "Centrocampista", 99, {9,16,0}},
                                                                 {"Jonathan Vila", {12, 11, 78}, 7000000, "Centrocampista", 4, {10,17,1}},
                                                                 {"Krohn-Dehli", {18, 2, 82}, 13000000, "Centrocampista", 50, {11,18,2}},
                                                                 {"Madinda", {27, 1, 86}, 9000000, "Centrocampista", 25, {12,19,3}},
                                                                 {"Orellana", {29, 8, 87}, 9000000, "Centrocampista", 73, {13,0,5}},
                                                                 {"Oubina", {25, 7, 81}, 9000000, "Centrocampista", 92, {14,0,6}},
                                                                 {"Rafinha", {9, 10, 83}, 14000000, "Centrocampista", 101, {15,1,7}},
                                                                 {"Toni", {23, 1, 86}, 11000000, "Centrocampista", 58, {16,2,8}},
                                                                 {"Bermejo", {22, 9, 87}, 10000000, "Delantero", 224, {17,3,9}},
                                                                 {"Charles", {14, 6, 88}, 16000000, "Delantero", 1, {18,5,10}},
                                                                 {"Nolito", {3, 4, 83}, 13000000, "Delantero", 142, {19,6,11}}
                                                                }
                                      },
                                      {"5.  Sevilla FC", "5.  Sevilla FC", {{"Manu Herrera", {7, 7, 85}, 11000000, "Portero", 1, {0,7,12}},
                                                          {"Tono", {13, 8, 76}, 11000000, "Portero", 144, {0,8,13}},
                                                          {"Beranger", {20, 9, 93}, 9000000,  "Defensa", 97, {1,9,14}},
                                                          {"Botia", {2, 2, 90}, 12000000, "Defensa", 1, {2,10,15}},
                                                          {"Cisma", {28, 10, 92}, 9000000, "Defensa", 97, {3,11,16}},
                                                          {"Edu Albacar", {20, 8, 73}, 10000000, "Defensa", 43, {4,12,17}},
                                                          {"Lomban", {16, 8, 85}, 11000000, "Defensa", 68, {6,13,18}},
                                                          {"Pelegrin", {28, 11, 87}, 10000000, "Defensa", 98, {7,14,19}},
                                                          {"Sapunaru", {11, 7, 93}, 11000000, "Defensa", 25, {8,15,0}},
                                                          {"Aaron Niguez", {20, 2, 90}, 12000000, "Centrocampista", 70, {9,16,0}},
                                                          {"Carles Gil", {12, 4, 89}, 10000000, "Centrocampista", 95, {10,17,1}},
                                                          {"Carlos Sanchez", {25, 12, 91}, 11000000, "Centrocampista", 84, {11,18,2}},
                                                          {"Fidel", {31, 1, 95}, 8000000, "Centrocampista", 118, {12,19,3}},
                                                          {"Flores", {10, 8, 79}, 9000000, "Centrocampista", 91, {13,0,4}},
                                                          {"Generelo", {21, 1, 80}, 7000000, "Centrocampista", 18, {14,0,6}},
                                                          {"Javi Marquez", {18, 30, 74}, 10000000, "Centrocampista", 87, {15,1,7}},
                                                          {"Mantecon", {22, 11, 76}, 8000000, "Centrocampista", 46, {16,2,8}},
                                                          {"Rivera", {16, 9, 79}, 10000000, "Centrocampista", 10, {17,3,9}},
                                                          {"Boakye", {5, 2, 80}, 14000000, "Delantero", 82, {18,4,10}},
                                                          {"Coro", {17, 9, 91}, 12000000, "Delantero", 115, {19,6,11}},
                                                          {"Manu del Moral", {26, 1, 76}, 11000000, "Delantero", 73, {0,7,12}}
                                                         }
                                      },
                                      {"6.  Milan", "6.  Milan", {{"Codina", {26, 7, 74}, 10000000, "Portero", 1, {1,9,14}},
                                                            {"Molla", {4, 6, 87}, 15000000, "Portero", 118, {2,10,15}},
                                                            {"Alexis", {9, 7, 82}, 14000000,  "Defensa", 94, {3,11,16}},
                                                            {"Escudero", {13, 11, 81}, 11000000, "Defensa", 56, {4,12,17}},
                                                            {"Lago", {17, 10, 81}, 11000000, "Defensa", 84, {5,13,18}},
                                                            {"Lisandro", {11, 8, 84}, 12000000, "Defensa", 83, {6,14,19}},
                                                            {"Lopo", {25, 7, 74}, 10000000, "Defensa", 17, {8,15,0}},
                                                            {"Rafa", {19, 12, 78}, 9000000, "Defensa", 88, {9,16,0}},
                                                            {"Valera", {20, 9, 82}, 12000000, "Defensa", 38, {10,17,1}},
                                                            {"Borja", {31, 5, 81}, 9000000, "Centrocampista", 90, {11,18,2}},
                                                            {"Diego Castro", {1, 7, 78}, 15000000, "Centrocampista", 104, {12,19,3}},
                                                            {"Gavilan", {16, 1, 82}, 11000000, "Centrocampista", 74, {13,0,4}},
                                                            {"Juan Rodriguez", {20, 6, 84}, 9000000, "Centrocampista", 11, {14,0,5}},
                                                            {"Lacen", {31, 3, 90}, 10000000, "Centrocampista", 10, {12,1,6}},
                                                            {"Lafita", {12, 12, 89}, 13000000, "Centrocampista", 51, {13,2,8}},
                                                            {"Michel", {29, 9, 85}, 9000000, "Centrocampista", 42, {14,3,9}},
                                                            {"Mosquera", {11, 2, 85}, 8000000, "Centrocampista", 94, {15,4,10}},
                                                            {"Pedro Leon", {25, 5, 90}, 14000000, "Centrocampista", 151, {16,5,11}},
                                                            {"Ciprian", {26, 11, 91}, 13000000, "Delantero", 76, {17,6,12}},
                                                            {"Colunga", {21, 8, 92}, 14000000, "Delantero", 93, {18,8,13}},
                                                            {"Miku", {7, 6, 76}, 12000000, "Delantero", 36, {19,9,14}}
                                                           }
                                      },
                                      {"7.  Valencia", "7.  Valencia", {{"Karnezis", {7, 6, 75}, 9000000, "Portero", 1, {0,10,15}},
                                                              {"Roberto", {13, 7, 86}, 12000000, "Portero", 117, {0,11,16}},
                                                              {"Brayan Angulo", {30, 6, 83}, 9000000,  "Defensa", 93, {1,12,17}},
                                                              {"Diakhate", {22, 12, 80}, 10000000, "Defensa", 69, {2,13,18}},
                                                              {"Foulquier", {8, 9, 82}, 9000000, "Defensa", 77, {3,14,19}},
                                                              {"Mainz", {20, 9, 83}, 10000000, "Defensa", 43, {4,15,0}},
                                                              {"Murillo", {6, 6, 75}, 8000000, "Defensa", 107, {5,16,0}},
                                                              {"Nyom", {28, 1, 77}, 11000000, "Defensa", 80, {6,17,1}},
                                                              {"Brahimi", {1, 8, 83}, 14000000, "Defensa", 25, {7,18,2}},
                                                              {"Buonanotte", {10, 3, 80}, 12000000, "Centrocampista", 14, {9,19,3}},
                                                              {"Coeff", {22, 6, 79}, 9000000, "Centrocampista", 97, {10,0,4}},
                                                              {"Dani Benitez", {5, 2, 81}, 13000000, "Centrocampista", 93, {11,0,5}},
                                                              {"Fran Rico", {1, 5, 85}, 12000000, "Centrocampista", 73, {12,1,6}},
                                                              {"Iturra", {10, 4, 89}, 11000000, "Centrocampista", 83, {13,2,7}},
                                                              {"Pereira", {21, 11, 90}, 12000000, "Centrocampista", 118, {14,3,9}},
                                                              {"Piti", {8, 10, 84}, 17000000, "Centrocampista", 82, {15,4,10}},
                                                              {"Recio", {22, 1, 86}, 10000000, "Centrocampista", 99, {16,5,11}},
                                                              {"Yebda", {06, 4, 89}, 11000000, "Centrocampista", 1, {17,6,12}},
                                                              {"El-Arabi", {5, 12, 90}, 12000000, "Delantero", 109, {18,7,13}},
                                                              {"Ighalo", {7, 9, 91}, 10000000, "Delantero", 36, {19,9,14}},
                                                              {"Riki", {26, 7, 86}, 13000000, "Delantero", 65, {20,10,15}}
                                                             }
                                      },
                                      {"8.  Liverpool", "8.  Liverpool", {{"Javi Jimenez", {27, 2, 75}, 9000000, "Portero", 8, {0,11,16}},
                                                               {"Keylor Navas", {3, 9, 86}, 12000000, "Portero", 118, {1,12,17}},
                                                               {"Chris", {10, 4, 83}, 10000000,  "Defensa", 36, {2,13,18}},
                                                               {"David Navarro", {12, 12, 80}, 12000000, "Defensa", 87, {3,14,19}},
                                                               {"Juanfran", {18, 10, 82}, 10000000, "Defensa", 116, {4,15,0}},
                                                               {"Karabelas", {10, 9, 83}, 9000000, "Defensa", 26, {5,16,0}},
                                                               {"Pedro Lopez", {26, 4, 75}, 9000000, "Defensa", 87, {6,17,1}},
                                                               {"Rodas", {18, 9, 77}, 9000000, "Defensa", 73, {7,18,2}},
                                                               {"Vyntra", {21, 2, 83}, 11000000, "Defensa", 88, {8,19,3}},
                                                               {"El Adoua", {30, 9, 80}, 9000000, "Centrocampista", 36, {10,0,4}},
                                                               {"El Zhar", {2, 5, 79}, 11000000, "Centrocampista", 104, {11,0,5}},
                                                               {"Ivanschitz", {15, 2, 81}, 11000000, "Centrocampista", 87, {12,1,6}},
                                                               {"Pallardo", {21, 10, 85}, 8000000, "Centrocampista", 1, {13,2,7}},
                                                               {"Pape Diop", {30, 1, 89}, 11000000, "Centrocampista", 123, {14,3,8}},
                                                               {"Pedro Rios", {1, 11, 90}, 10000000, "Centrocampista", 54, {15,4,10}},
                                                               {"Ruben Garcia", {28, 12, 84}, 13000000, "Centrocampista", 83, {16,5,11}},
                                                               {"Sergio Pinto", {12, 1, 86}, 10000000, "Centrocampista", 52, {17,6,12}},
                                                               {"Simao", {26, 7, 89}, 9000000, "Centrocampista", 72, {18,7,13}},
                                                               {"Baba", {25, 10, 90}, 10000000, "Delantero", 98, {19,8,14}},
                                                               {"Barral", {17, 7, 91}, 12000000, "Delantero", 90, {0,10,15}},
                                                               {"Nong", {6, 6, 86}, 11000000, "Delantero", 25, {0,11,16}}
                                                              }
                              }

        };
//muestra la plantilla de un equipo de tipo struct equipo
void mostrarPlantilla (struct equipo seleccionado){


                    //nombre del equipo y ciudad a la que representa
        cout<< "Nombre equipo: "<< seleccionado.nombre<< "\nCiudad: "<< seleccionado.ciudad<< "\n\n"
                "Nombre\t\t\tPosicion\tFicha\t\tPuntos\tF. Nac.\t\tUltimos equipos\n\n";  //encabezamiento de la lista de jugadores
                    //3 tabs para el nombre, 1 tab para posicion, 2 tabs para ficha, 1 tab para puntos, 2 tabs para f.nac.
        for (int c=0; c<20; c++){  //recorremos el vector de la plantilla del equipo para mostrar cada jugador

                    cout<< seleccionado.plantilla[c].nombre;            //nombre del jugador en esa posicion del vector plantilla
                    if ((strlen (seleccionado.plantilla[c].nombre)) < 8) cout<< "\t\t\t";  //si el nombre del jugador tiene menos de 8 caracteres
//incluimos 3 tabs
                    else if ((strlen (seleccionado.plantilla[c].nombre)) < 20) cout<< "\t\t";  //si el nombre es mayor de 8 y menor de 20
//caracteres incluimos 2 tabs
                    else cout<< "\t";               //si tiene 16 caracteres o más un solo tab

                    cout<< seleccionado.plantilla[c].posicion;          //posicion del jugador en esa posicion de "plantilla"
                    if ((strlen (seleccionado.plantilla[c].posicion)) < 8) cout<< "\t\t";  //si la posicion tiene menos de 8 caracteres incluimos 2
//tabs
                    else cout<< "\t";           //si tiene 8 o más caracteres incluimos un unico tab

                    if (seleccionado.plantilla[c].ficha < 9999999) cout<< " ";          //si la ficha tiene menos de 8 cifras incluimos un espacio
//antes de ella
                    cout<<seleccionado.plantilla[c].ficha;  //ficha del jugador en esa posicion de "plantilla"
                    cout<< "\t";        //tabulador

                    cout<< seleccionado.plantilla[c].puntosLiga<< "\t";  //puntos en la liga fantastica del jugador en esa posicion de plantilla

                    mostrarFecha (seleccionado.plantilla[c].fechaNacimiento);  //mostramos la fecha de nacimiento del jugador en la
//posicion correspondiente de "plantilla"
                    if ((seleccionado.plantilla[c].fechaNacimiento.dia > 9) && (seleccionado.plantilla[c].fechaNacimiento.mes > 9)) cout<< "\t";  //si tanto el dia como el mes de la fecha de nacimiento tienen dos cifras incluimos un unico tab
                    else cout<< "\t\t";         //en caso contrario incluimos 2 tabs

                    for (int j=0; j<3; j++){            //recorremos el vector que contiene la posicion en "equipo" de los ultimos equipos en
//que el jugador ha estado

                        int a=seleccionado.plantilla[c].ultimosEquipos[j];
                        cout<<equipo[a].nombre;

                             //mostramos el nombre del equipo que se encuentra en esa posicion
                        if (j<2) cout<< " / ";          //tras los dos primeros equipos mostramos una barra de separacion
                    }
                    cout<< "\n";  //terminamos la linea
                }  //fin de los datos de un jugador
}

//muestra los datos de un jugador tipo struct jugador, contenido en un struct equipo
void mostrarJugador (struct jugador seleccionado, struct equipo equipo){

        cout<< "Nombre\t\t\tPosicion\tFicha\t\tPuntos\tF. Nac.\t\tEquipo\n";  //cabecera
        cout<< seleccionado.nombre;                                       //la funcion usa la misma tabulacion que en el caso anterior
                    if ((strlen (seleccionado.nombre)) < 16) cout<< "\t\t\t";  //para cuadrar los datos y que aparezcan ordenados
                    else if ((strlen (seleccionado.nombre)) < 20) cout<< "\t\t";
                    else cout<< "\t";

        cout<< seleccionado.posicion;
                    if ((strlen (seleccionado.posicion)) < 16) cout<< "\t\t";
                    else cout<< "\t";

                    if (seleccionado.ficha < 9999999) cout<< " ";
        cout<<seleccionado.ficha<< "\t";

        cout<< seleccionado.puntosLiga<< "\t";

        mostrarFecha (seleccionado.fechaNacimiento);
                    if ((seleccionado.fechaNacimiento.dia > 9) && (seleccionado.fechaNacimiento.mes > 9)) cout<< "\t";
                    else cout<< "\t\t";

        cout<< equipo.nombre << "\n";

}


 int main(int argc, char** argv){
                  int equi=0;
                  int k=0;


        char seleccion[80];             //cadena para la seleccion del nombre de equipo o jugador en caso necesario
        int respuesta, edad;        //variable respuesta para la seleccion del menu, se inicializa a 1 para entrar en el bucle
                                    //variable edad para introducir el año de nacimiento del jugador en las opciones necesarias
        struct jugadores futbolista[420];   //vector de "struct jugador" con los 420 jugadores registrados en los 20 equipos

        bool encontrado;        //variable booleana para controlar si los nombres se encuentran o no

                                            //declaracion de todos los equipos y sus correspondientes jugadores



                {
            menu:
           system ("cls");                     //seleccion 1


int main();
{
    system ("COLOR E0");
    vector<string> usuarios;
    vector<string> claves;

    // Se añaden usuarios al vector
    usuarios.push_back("admin");
    usuarios.push_back("james");
    usuarios.push_back("johan");
    usuarios.push_back("kevin");

    // Se añaden claves al vector
    claves.push_back("123");
    claves.push_back("789");
    claves.push_back("abc");
    claves.push_back("efg");


    string usuario, password;

    int contador = 0;
    bool ingresa = false;

    do {
        system("cls");
        cout << "\n\t\tLOGIN DE USUARIO" << endl;
        cout << "\t\tINICIAR SESION" << endl;
        cout << "\t\t----------------" << endl;
        cout << "\n\tUsuario: ";
        getline(cin, usuario);

        char caracter;

        cout << "\tPassword: ";
        caracter = getch();

        password = "";

        while (caracter != ENTER) {

            if (caracter != BACKSPACE) {
                password.push_back(caracter);
                cout << "*";

            } else {
                if (password.length() > 0) {
                    cout << "\b \b";
                    password = password.substr(0, password.length() - 1);
                }
            }

            caracter = getch();
        }

        for (int i = 0; i < usuarios.size(); i++) {
            if (usuarios[i] == usuario && claves[i] == password) {
                ingresa = true;
                break;
            }
        }

        if (!ingresa) {
            cout << "\n\n\tEl usuario y/o password son incorrectos" << endl;
            cin.get();
            contador++;
        }

    } while (ingresa == false && contador < 3);

    if (ingresa == false) {
              cout << "\n\tUsted no pudo ingresar al sistema. ADIOS" << endl;
    } else {
        cout << "\n\n\t\tBienvenido Al Sistema" << endl;
        cout << "\t\t---------------------" << endl;
        int main();

       int a, b, i,j,c,p,promedio,suma,club,po;
        while (1==1) {
        cout << "\t\t---------------------" << endl;                                                        //menu principal

        cout << "\nOPCIONES\n\n";
        cout << "1) Equipos\n";
        cout << "2) Jugadores\n";
        cout << "3) Simular Partido\n";
        cout << "4) Ver Resultados De Equipos\n";
        cout << "5) Tabla de Acumulado\n";
        cout << "6) Salir Del Sistema\n";
        cout << "\t\t---------------------" << endl;

        cin>> respuesta;              //opcion seleccionada del menu principal

          switch(respuesta){
              case 1:
              system ("cls");                     //seleccion 1
               cout<< "EQUIPOS DE LA LIGA\n\n";              //muestra los equipos en la parte superior de la pantalla
          for (int k=0; k<8; k++) cout<< equipo[k].nombre<< "\n";
            cout<<"Deseas Regresar al Menu: 0=No 1=Si\n";
            cin>>respuesta;
            if(respuesta==0){
           goto menu;}
            break;

            case 2:
             system ("cls");         //seleccion 2
            cout<< "Nombre del jugador: ";  //pedimos el nombre del jugador a buscar
         //   getchar();
            cin>>seleccion;         //obtenemos el nombre del jugador

                    //borramos la pantalla
            encontrado = false;         //hacemos encontrado false
            for (int i=0; i<20; i++){           //recorremos el vector con los equipos
              for (int j=0; j<21; j++)          //en cada equipo recorremos cada jugador de la plantilla
                if (strcmp (seleccion, equipo[i].plantilla[j].nombre) == 0){ //si la cadena obtenida en la seleccion coincide con el nombre
//del jugador
                  mostrarJugador (equipo[i].plantilla[j], equipo[i]);           //mostramos la informacion del jugador
                  encontrado = true;            //hacemos encontrado true. Si no lo hemos encontrado seguira siendo false
                }
            }

            if (encontrado == false) cout<< "El jugador no se ha encontrado\n";   //en caso de no haber encontrado el jugador le
//damos la informacion al usuario
             cout<<"Deseas Regresar al Menu: 0=si 11=no\n";
            cin>>respuesta;
            if(respuesta==0){
           goto menu;}
            break;

            case 3:
                {
        for (i=0; i<8; i++){
		cout << "Ronda N." << i+1 << endl;
		for (j=0; j<1; j++){
			cout << "Partidos Jugados: "; cin >> futbol[i][j].PJ;
			cout << "Patidos Ganados: "; cin >> futbol[i][j].PG;
			cout << "Partidos Empatados: "; cin >> futbol[i][j].PE;
			cout << "Partidos Perdidos: "; cin >> futbol[i][j].PP;
            system ("cls");                     //seleccion 1
            //muestra los equipos en la parte superior de la pantalla
          for (int k=0; k<8;k++);
            encontrado = false;                 //hacemos encontrado false
            cout<< "Nombre del equipo: "; //pedimos el nombre del equipo
           // getchar();
            cin>>seleccion;                   //obtenemos el nombre del equipo a buscar

                              //borramos pantalla
                                            //recorremos el vector que contiene los equipos, comparando la cadena introducida por el usuario
//con el nombre de cada equipo
            for (int k=0; k<8;k++) {


               if (strcmp (seleccion, equipo[i].nombre) == 0){        //strcmp nos devuelve 0 en caso de que las
//cadenas comparadas sean iguales
            mostrarPlantilla (equipo[i]);            //en caso de coincidencia mostramos la plantilla del equipo definido en esa posicion
              encontrado = true;                //hacemos que encontrado sea true cuando hemos encontrado la coincidencia. De lo
            }                        //contrario seguira siendo false

                   }
              if (encontrado == false) cout<< "Elija Un Club\n";  //en caso de no haber encontrado el equipo le
//damos la informacion al usuario
			cin >> equipo[k].nombre;

		}
	}

	//promedio
	for (i=0; i<3; i++) {
        suma = 0;
        for (j=0; j<1; j++) {
            futbol[i][j].PTS = (futbol[i][j].PG * 3 + futbol[i][j].PE * 1);
        }
	}}
            cout<<"Deseas Regresar al Menu: 0=No 1=Si\n";
            cin>>respuesta;
            if(respuesta==0){
           goto menu;}
            break;

            case 4:
            //mostrar tabla
            cout<< "PO  CLUB\t\t  PJ  PG  PE  PP  GF  GC  PTS"<< endl;
            cout<<"Deseas Regresar al Menu: 0=No 1=Si\n";
            cin>>respuesta;
            if(respuesta==0){
           goto menu;}
            break;

            case 5:
            cout<< "\n"<< endl;
            //mostrar tabla
            cout<< "PO  CLUB\t\t  PJ  PG  PE  PP  GF  GC  PTS"<< endl;
            cout<< "\n"<< endl;
            for (int k=0; k<8;k++){
            for (i=0; i<3; i++){
            for (j=0; j<1; j++)
			cout << equipo[k].nombre << "\t\t  " << futbol[i][j].PJ << "   " << futbol[i][j].PG << "   " << futbol[i][j].PE
                << "   " << futbol[i][j].PP << "\t\t  " << futbol[i][j].PTS;
			cout<< "\n"<< endl;
			}}
            cout<<"Deseas Regresar al Menu: 0=No 1=Si\n";
            cin>>respuesta;
            if(respuesta==0){
           goto menu;}
                break;

            case 6:
            system ("COLOR 3F");
            cout<< "Seguro que quieres Salir...??   SI o NO\n"<< endl;
            cout<< "\n 1- SI";
            cout<< "\n 2- NO\n\n";
            cin >> b;
            if(b==1)
            {
                return 0;
            }
            else
            {
             int main();
            }
        default:
            cout<< "Opcion No Valida"<< endl;
            break;
            }}
            while(a != 3);
     return main();
        }
    }

     }}
