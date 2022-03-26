#include <stdio.h>


int display_main_menu(void)    // DISPLAY MAIN MENU TO USER
{
    int main_menu;

    printf("                           Welcome to Unit Converter \n");
    printf("\n************************************ MAIN MENU *****************************************\n\n");
    printf("\n1-LENGTH CONVERTER     \n");
    printf("\n2-WEIGHT CONVERTER     \n");
    printf("\n3-TEMPRATURE CONVERTER \n");
    printf("\n\n\n\n\nEnter your choice? (numeric value only) : ");

    scanf("%d", &main_menu);

    while(main_menu>3 || main_menu<1) {
        printf("\n YOU ENTERED WRONG INPUT TRY AGAIN : ");
        scanf("%d", &main_menu);
    }

    return main_menu;
}


int display_length_menu(void)     // DISPLAY THE LENGTH CONVERTER MENU 1 TO USER
{

    int length_menu;

    printf("\n******************************************** LENGTH CONVERTER **************************************\n\n");
    printf("\n***************************************** METRIC UNITS CONVERT FROM ********************************\n\n");
    printf("\n 1-KILOMETER TO METER               2-KILOMETER TO CENTIMETER             3-KILOMETER TO MILLIMETER\n");
    printf("\n 4-METER TO KILOMETER               5-METER TO CENTIMETER                 6-METER TO MILLIMETER\n");
    printf("\n 7-CENTIMETER TO KILOMETER          8-CENTIMETER TO METER                 9-CENTIMETER TO MILLIMETER\n");
    printf("\n 10-MILLIMETER TO KILOMETER         11-MILLIMETER TO METER                12-MILLIMETER TO CENTIMETER\n");
    printf("\n 13-INCH To FEET                    14-FOOT To INCH                       15-YARD T0 CENT\n");
    printf("\n 16-CENT to YARD\n");

    printf("\n\n\nEnter your choice ?(numeric value only) :   ");

    scanf("%d",&length_menu);

    while(length_menu>16 || length_menu<1) {
        printf("\n YOU ENTERED WRONG INPUT TRY AGAIN : ");
        scanf("%d",&length_menu);
    }

    return length_menu;
}


int display_weight_menu(void)      //DISPLAYS THE WEIGHT CONVERTER MENU
{

    int weight_menu;


    printf("\n********************************************* WEIGHT CONVERTER *********************************************\n\n");
    printf("\n1-KILOGRAM TO GRAM                       2-GRAM TO KILOGRAM                           3-KILOGRAM TO POUND\n");
    printf("\n4-POUND TO KILOGRAM        \n");
    printf("\n\n\nEnter your choice ?(numeric value only) : ");

    scanf("%d",&weight_menu);

    while(weight_menu>4 || weight_menu<1){
        printf("\n YOU ENTERED WRONG INPUT TRY AGAIN : ");
        scanf("%d",&weight_menu);
    }


    return weight_menu;

}


int display_temprature_menu(void){              //DISPLAYS THE TEMPRATURE MENU

    int temprature_menu;


    printf("\n********************************************** TEMPRATURE CONVERTER ***********************************************\n\n");
    printf("\n1-CELCIUS TO FARENHEIT                       2-FARENHEIT TO CELCIUS                           \n");
    printf("\n\n\nEnter your choice ?(numeric value only): ");
    scanf("%d",&temprature_menu);

    while(temprature_menu>2 || temprature_menu<1) {
        printf("\n YOU ENTERED WRONG INPUT TRY AGAIN : ");
        scanf("%d",&temprature_menu);
    }

    return temprature_menu;

}


float display_value(void)                       // DISPLAYS VALUE
{

    float value;

    printf("\n\nEnter the value that you want to convert : ");
    scanf("%f",&value);

    return value;
}


void display_answer(float ans){                         //DISPLAY  ANSWER

    printf("\n\nConverted value is : %f\n\n",ans);

}