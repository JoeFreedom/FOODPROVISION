//
// Created by Joel Isuwa on 31-Mar-20.
//
#include <string>

using namespace std;
class MilkDiary
{
public:
    string milkToDrink ;
    string cheese;
    string yoghurt;
    string cottageCheese;
    string ice_Cream;

    MilkDiary(){};
    MilkDiary(string milkToDrink, string cheese, string yoghurt, string cottageCheese, string ice_Cream) {

        this->milkToDrink = milkToDrink;
        this->cheese = cheese;
        this->yoghurt = yoghurt;
        this->cottageCheese = cottageCheese;
        this->ice_Cream = ice_Cream;
    };

    void Preparation(){

    }
    };

