/* 
 * File:   Homework_01.h
 * Author: Ben Traines
 *
 * Created on January 11, 2019, 10:41 AM
 */

#ifndef HOMEWORK_01_H
#define HOMEWORK_01_H

class Calander{
protected:
    string m_Date;
    string m_Activity;
    string m_Time;
    string m_Description;
    
public:
    Calander( const string& date, const string& activity, const string& time, const string& description){
        m_Date=date;
        m_Activity=activity;
        m_Time=time;
        m_Description=description;
    }
    
    string getDate() const {
        return m_Date;
    }
    
    string getActivity() const {
        return m_Activity;
    }
    
    string getTime() const {
        return m_Time;
    }
    
    string getDescription() const {
        return m_Description;
    }
    
    void setDate(const string& date){
        m_Date = date;
    }
    
    void setActivity(const string& activity){
        m_Activity = activity;;
    }
    
    void setTime(const string& time){
        m_Time = time;
    }
    
    void setDescription(const string& description){
        m_Description = description;
    }
};


#endif /* HOMEWORK_01_H */

