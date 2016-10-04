/* 
 * File:   main.cpp
 * Author: Melek Nurten YAVUZ 
 *
 * Created on 06 AralÄ±k 2014 Cumartesi, 23:25
 */

#include <cstdlib>
#include<iostream>
using namespace std;
/*
 * 
 */
int recursive(int num);
int main() {
    int num;
    cin>>num;
    recursive(num);
    return 0;
}
int recursive(int num){
    
    if(num<10){
        cout<<num%10<<endl;
        return num;
    }
    else{
        cout<<num%10<<endl;
        return recursive(num/10) ;
    }
}
