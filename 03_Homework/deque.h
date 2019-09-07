/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   deque.h
 * Author: Ben
 *
 * Created on January 18, 2019, 6:35 AM
 */

#ifndef DEQUE_H
#define DEQUE_H

#include <queue>


class DoubleQueue{
protected:
    vector <string> m_queue;
public:
    void addRight(string data) {m_queue.push_back(data);}
    void addLeft (string data) {m_queue.insert(m_queue.begin(), data);}
    string delRight() {
        string rtrn = getRight();
        m_queue.pop_back();
        return rtrn;
    }
    string getRight() {return m_queue.back();}
    string delLeft() {
        string rtrn = m_queue.front();
        m_queue.erase(m_queue.begin());
        return rtrn;
    }
    
    void printDQ() {
        for(auto i = m_queue.begin(); i != m_queue.end(); ++i){
            cout<<*i<<", ";
        }
        cout << endl;
    }
};

class Stack: private DoubleQueue{
public:
    void push (string data) {addLeft(data);}
    void printStack() {printDQ();}
    string top() {return m_queue.front();}
    string pop() {return delLeft();}
protected:
    using DoubleQueue::m_queue;
};

class Queue: private DoubleQueue{
public:
    void push (string data) {addLeft(data);}
    void printQueue() {printDQ();}
    string pop() {return delRight();}
    bool full() {if(m_queue.back() == m_queue.front())return true;}
protected:
    using DoubleQueue::m_queue;
};


#endif /* DEQUE_H */

