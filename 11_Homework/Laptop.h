/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Laptop.h
 * Author: Ben
 *
 * Created on March 14, 2019, 5:43 AM
 */

#ifndef LAPTOP_H
#define LAPTOP_H
#include "Item.h"
#include <iostream>
using namespace std;

class Laptop: public Item{
protected:
    string m_size;
public:
    Laptop(string name, double price, string size):Item(name,price), m_size(size) {}
    virtual void print() const{
        cout<<"(Laptop name="<<m_name<<", Laptop price="<<m_price<<"); ";
    }
    virtual ~Laptop(){}
};

#endif /* LAPTOP_H */

