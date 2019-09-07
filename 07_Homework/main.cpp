/* 
 * File:   main.cpp
 * Author: Ben
 *
 * Created on February 5, 2019, 9:40 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


template<class QueueType, int QueueSize >class Queue{
    protected:
        QueueType values[QueueSize];
        int bottom, tp;
    public:
        queue(){
            bottom=0;
            tp=-1;
        }
        QueueType top(){
            if(bottom == 0){
                return 0;
            }
            else{
                return values[tp];
            }
        }
        bool push(QueueType elem){
            if (bottom == QueueSize) {
                return false;
            }else{
                values[bottom]=elem;
                bottom ++;
                return true;
            }
        }
        QueueType pop(){
            if(bottom == 0){
                return 0;
            }
            else{
                tp++;
                return values[tp];
            }
        }
        bool empty(){
            if(bottom == 0){
                return true;
            }
            return false;
        }

};

int main(int argc, char** argv) {
    cout << "\nInteger Queue" << endl;
    Queue<int, 10> queue;
    queue.queue();

    for(int i=1; i<7; i++){
        queue.push(i);
    }
    
    for(int i=0; i<6; i++){
        cout << queue.pop() << endl;
    }
    
    
    cout << "\n\nDouble Queue" << endl;
    
    Queue<double, 10> dbl_queue;
    dbl_queue.queue();
    
    dbl_queue.push(0.1);
    dbl_queue.push(0.2);
    dbl_queue.push(0.3);
    dbl_queue.push(0.4);
    dbl_queue.push(0.5);
    dbl_queue.push(0.6);
    
    for(int i=0; i<6; i++){
        cout << dbl_queue.pop() << endl;
    }
    
    
    return 0;
}

