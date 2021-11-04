/** File name: myBlink.cpp
 *
 * made by Joshua Gillespie. 11/3/2021
 * program made for homwowrk 7
 * 
 * To Blink LED2 five times
 * ./myBlink blink 2 5
 *
 *
 *   Written by Joshua Gillespie. Noveber 3, 2021.
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "derek_LED.h"//header file

using namespace std;

int main(int argc, char* argv[]){
   if(argc!=2){
	cout << "Usage is makeLEDs <command>" << endl;
	cout << "   command is one of: on, off, flash, blink or status" << endl;
	cout << " e.g. makeLEDs flash" << endl;
}
cout << "Starting the makeLEDs program" << endl;
string cmd(argv[1]);
LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
for(int i=0; i<=3; i++){
   if(cmd=="on")leds[i].turnOn();
   else if(cmd=="off")leds[i].turnOff();
   else if(cmd=="flash")leds[i].flash("100"); //default is "50"
   else if(cmd=="status")leds[i].outputState();
   else if(cmd=="blink")leds[i].blink();
   else{ cout << "Invalid command!" << endl; }
}
cout << "Finished the makeLEDs program" << endl;
return 0;
};
