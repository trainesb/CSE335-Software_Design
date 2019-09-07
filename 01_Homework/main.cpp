/* 
 * File:   main.cpp
 * Author: Ben
 *
 * Created on January 11, 2019, 10:40 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
#include "Homework_01.h"
#define BUFFERSIZE 100

void printBuffSize(unsigned int buffsize){
    cout<<buffsize<<endl;
}

void printBuffSizePtr(const unsigned int* buffsizeptr){
    cout<<*buffsizeptr<<endl;
}

bool sameDate(const Calander& date1, const Calander& date2){
    return date1.getDate() == date2.getDate();
}

bool sameTime(const Calander& time1, const Calander& time2){
    return time1.getTime() == time2.getTime();
}

bool sameActivity(const Calander& activity1, const Calander& activity2){
    return activity1.getActivity() == activity2.getActivity();
}

int main(int argc, char** argv) {
    const Calander Entry01("1/11/2019", "HW", "12pm", "Wrote this code");
    Calander Entry02("1/11/2019", "Project", "11am", "Not HW");
    
    cout<<sameDate(Entry01, Entry02)<<endl;
    cout<<sameTime(Entry01, Entry02)<<endl;
    cout<<sameActivity(Entry01, Entry02)<<endl;
    
    return 0;
}

