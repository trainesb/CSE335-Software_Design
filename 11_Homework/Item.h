/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Item.h
 * Author: Ben
 *
 * Created on March 14, 2019, 6:23 AM
 */

#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <iostream>
using namespace std;

class Item{
protected:
    string m_name;
    double m_price;
    string m_descriptor;
    Item(string name, double price):  m_name(name), m_price(price) {}
public:
    virtual string Name() const{return m_name;}
    virtual double Price() const{return m_price;}
    virtual void print() const=0;
    
    virtual ~Item(){};
};

#endif /* ITEM_H */

