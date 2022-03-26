/**
 * @file display.h
 * @author Rishik Guggilla (you@domain.com)
 * @brief  this header file is  used to interact with user by showing the menus
 * @version 0.1
 * @date 2022-03-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef DISPLAY_H
#define DISPLAY_H

// these are some function declarations

int display_main_menu(void);            //declaration of display main menu function

int display_length_menu(void);         //declaration of display length menu function

int display_weight_menu(void);          //declaration of display weight menu function

int display_temprature_menu(void);      //declaration of display temprature menu function

float display_value(void);              //declaration of display value function

void display_answer(float ans);         //declaration of display ansswer menu function


#endif