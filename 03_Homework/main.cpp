/* 
 * File:   main.cpp
 * Author: Ben
 *
 * Created on January 16, 2019, 11:09 AM
 */

#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include "deque.h"



int main(int argc, char** argv) {
    DoubleQueue dq;
    
    dq.addLeft("string1");
    dq.addLeft("string2");
    dq.addLeft("string3");
    dq.addLeft("string4");
    dq.addLeft("string5");
    
    dq.addRight("string6");
    dq.addRight("string7");
    dq.addRight("string8");
    
    for(int i=0; i<8; ++i){
        cout << dq.delLeft() << " ";
    }
    cout << endl;
    
    
    Stack stk;
    stk.push("string100");
    stk.push("string200");
    stk.push("string300");
    stk.push("string400");
    
    for(int b=0; b<4; ++b){
        cout << stk.pop() <<" ";
    }
    cout << endl;
    
    
    Queue que;
    que.push("string10");
    que.push("string20");
    que.push("string30");
    que.push("string40");
    
    for(int c=0; c<4; ++c){
        cout << que.pop() << " ";
    }
    cout << endl;
    
    

    
    return 0;
}

