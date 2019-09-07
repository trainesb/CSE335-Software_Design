/* 
 * File:   Bundle.h
 * Author: Ben
 *
 * Created on March 14, 2019, 5:44 AM
 */

#ifndef BUNDLE_H
#define BUNDLE_H
#include "Item.h"
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Bundle: public Item{
protected:
    vector<Item*> items;
    double m_discount;
public:
    Bundle(string name, double discount): Item(name,0), m_discount(discount) {}
    
    virtual ~Bundle() {
        for(int i=0; i<items.size(); i++) delete items[i];
    }
    
    virtual void addItem(Item* item){
        items.push_back(item);
        m_price += (item->Price()*m_discount);
    }
    
    virtual void remove_Item(Item* item){
        remove(items.begin(), items.end(), item);
        m_price -= (item->Price()*m_discount);
    }
    
    virtual Item* getChild(int i) const{
        return items[i];
    }
    
    virtual unsigned int getChildrenSize() const{
        return items.size();
    }
    
    virtual void print() const{
        cout<<"Bundle "<<m_name<<" contains: (";
        for(int i=0; i<items.size(); i++){
            items[i]->print();
        }
        cout<<"; Bundle Price= "<<m_price<<");";
    }
};


#endif /* BUNDLE_H */

