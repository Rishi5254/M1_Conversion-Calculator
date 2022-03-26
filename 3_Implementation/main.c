#include<stdio.h>
#include"display.h"
#include"converters.h"


int main(){
    int main_menu;
    main_menu=display_main_menu();
    int sub_menu;
    float value=0.0;
    float ans=0.0;


    switch (main_menu) {
    case 1:
        sub_menu=display_length_menu();
        value=display_value();
        ans=calculate_length_menu(sub_menu , value);
        display_answer(ans);
        break;

    case 2:
        sub_menu=display_weight_menu();
        value=display_value();
        ans=calculate_weight_menu(sub_menu , value);
        display_answer(ans);
        break;

    case 3:
        sub_menu=display_temprature_menu();
        value=display_value();
        ans=calculate_temprature_menu(sub_menu , value);
        display_answer(ans);
        break;

    default:
        break;
    }

}