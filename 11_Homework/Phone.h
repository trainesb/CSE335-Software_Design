/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Phone.h
 * Author: Ben
 *
 * Created on March 14, 2019, 5:39 AM
 */

#ifndef PHONE_H
#define PHONE_H

#include "Item.h"
#include <iostream>
using namespace std;
    
class Phone: public Item{
protected:
    int m_year;
public:
    Phone(string name, double price, int year):Item(name,price), m_year(year){}
    virtual void print() const{
        cout<<"(Phone name="<<m_name<<", Phone price="<<m_price<<"); ";
    }
    virtual ~Phone(){}
};

#endif /* PHONE_H */

