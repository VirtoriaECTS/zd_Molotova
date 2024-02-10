// zd_Molotova.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>
using namespace std;
const int lenght = 6;


struct HomePeople {
    bool apartment;
    double area;

    union
    {
        int yearOfDelivery;
        char surname[100];
    } peopleInfo;
};

HomePeople homePeople[lenght];


void structFull() {

    homePeople[0].apartment = true;
    homePeople[0].area = 60;
    homePeople[0].peopleInfo.yearOfDelivery = 2015;

    homePeople[1].apartment == false;
    homePeople[1].area = 90;
    new(&homePeople[1].peopleInfo.surname) string("Kharsevich");

    homePeople[2].apartment == false;
    homePeople[2].area = 200;
    new(&homePeople[2].peopleInfo.surname) string("Молотова");


    homePeople[3].apartment == false;
    homePeople[3].area = 60;
    new(&homePeople[3].peopleInfo.surname) string("Ugrumova");

    homePeople[4].apartment == false;
    homePeople[4].area = 80;
    new(&homePeople[4].peopleInfo.surname) string("Oberuhtina");

    homePeople[5].apartment == false;
    homePeople[5].area = 10;
    new(&homePeople[5].peopleInfo.surname) string("Shumkova");

}

int SortHuman(int area) {
    

    return 0;
}
int main()
{

    setlocale(LC_ALL, "Russian");

   
    structFull();

    //cout << "sssss\n";
    //puts(homePeople[1].peopleInfo.surname);
    //cout << homePeople[1].peopleInfo.surname;
   // cout << "\nsssss";


   // SortHuman(70);


    HomePeople sortPeople[lenght];
    int index = 0;

    for (int i = 0; i < lenght; i++) {
        if (homePeople[i].apartment == false && homePeople[i].area > 70) {
            sortPeople[index] = homePeople[i];
            cout << homePeople[i].peopleInfo.surname << "\n";
            cout << homePeople[i].area << "\n";
            index += 1;
        }


    }


    cout << "sssss";
}

