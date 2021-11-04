/** File name: derek_LED.h
 * *   headerfile for performing Simple On-board LED flashing program
 * *   simple OOP  struture for the Exploring BeagleBone book
 * 
 * *   This program uses all four LEDS and can be executed in three ways:
 * make leds on
 * make leds off
 * makeleds flash
 * makeleds status
 *
 * *   Written by Joshua Gillespie, November 3, 2021.
 * */

#ifndef DEREK_LED_H
#define DEREK_LED_H
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#define LED_PATH "/sys/class/leds/beaglebone:green:usr"


class LED {
	private:
		string path;
		int number;
		virtual void writeLED(string filename, string value);
		virtual void removeTrigger();
	public:
		LED(int number);
		virtual void turnOn();
		virtual void turnOff();
		virtual void flash(string delayms);
		virtual void outputState();
		virtual void blink();
		virtual ~LED();
};
#endif
