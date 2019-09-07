/* 
 * File:   main.cpp
 * Author: Ben
 *
 * Created on January 14, 2019, 10:19 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

class Record{
public:
    int id;
protected:
    int date;
private:
    double grade;
public:
    Record(int rec_num, int rec_date, double rec_grade):id(rec_num),date(rec_date),grade(rec_grade) {
    }
};

class PublicRecord: public Record{
public:
    PublicRecord(int pub_id, int pub_date, double pub_grade):Record(pub_id, pub_date, pub_grade){
    }
    
    void print() {
        cout<<endl<<"PublicRecord"<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Date: "<<date<<endl;
        
        //cout<<"Grade: "<<grade<<endl;
        //error: "int Record::grade" is private
    }
};

class ProtectedRecord: protected Record{
public:
    ProtectedRecord(int pub_id, int pub_date, double pub_grade):Record(pub_id, pub_date, pub_grade){
    }
    
    void print() {
        cout<<endl<<"ProtectedRecord"<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Date: "<<date<<endl;
        
        //cout<<"Grade: "<<grade<<endl;
        //error: 'int Record::grade' is private
    }
};

class PrivateRecord: private Record{
public:
    PrivateRecord(int pub_id, int pub_date, double pub_grade):Record(pub_id, pub_date, pub_grade){
    }
    
    void print() {
        cout<<endl<<"Private Record"<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Date: "<<date<<endl;
        
        //cout<<"Grade: "<<grade<<endl;
        //error: 'int Record::grade' is private
    }
};

class RecPrint: public ProtectedRecord{
public:
    RecPrint(int pub_id, int pub_date, double pub_grade):ProtectedRecord(pub_id, pub_date, pub_grade){
    }
    
    void print(){
        cout<<endl<<"RecPrint"<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Date: "<<date<<endl;
        
        //cout<<"Grade: "<<grade<<endl;
        //error: 'int Record::grade' is private
    }
};

int main(int argc, char** argv) {


    Record record(1, 43, .5);
    cout<<"Record ID: "<<record.id<<endl;
    
    PublicRecord pub_rec(2, 59, 0.9);
    cout<<"Record ID: "<<pub_rec.id<<endl;
    pub_rec.print();
    
    ProtectedRecord pro_rec(3, 86, 0.8);
    pro_rec.print();
    //cout<<"Record ID: "<<pro_rec.id<<endl;
    
    PrivateRecord prvt_rec(4, 10, 0.1);
    prvt_rec.print();
    //cout<<"Record ID: "<<prvt_rec.id<<endl;
    
    RecPrint print_rec(5, 92, 0.7);
    print_rec.print();
    //cout <<"Record ID: "<<print_rec.id<<endl;
    
    return 0;

}

