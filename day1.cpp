#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int coutLines();
void assignment(int);
string *storage;
int *container;
int main(int argc, char const *argv[])
{
    ifstream file;
    int increased=0, decreased=0, i=0;
    file.open("puzzle.txt", ios::in);
    coutLines();
   // assignment(coutlines());
   // cout<<coutLines();
    storage = new string[coutLines()];
    container = new int[coutLines()];
        while(!file.eof()){
        if(file.get()=='\n'){
         file>>storage[i];  
         container[i]=stoi(storage[i]);
         i++;
        }
          }  
        cout<<coutLines()<<endl;
        for(int k=coutLines()+1;k>=0;k--){
            if(container[k]>container[k-1]){
                increased+=1;
                cout<<container[k]<<"--- increased"<<endl;
            }
            else
            if(container[k]<container[k-1]){
                decreased+=1;
                cout<<container[k]<<"--- decreased"<<endl;
            }
        }
        cout<<" The depth measurements that have increased are:  "<<increased+1<<"  and drecreased: "<<decreased<<endl;
    return 0;

}
int coutLines(){
    
   int counter=0;
    ifstream file;
    file.open("puzzle.txt", ios::in);
    if(file.fail()){
        cout<<"file cannot be opened";
        exit(1);
    }
    while(!file.eof()){
        if(file.get()=='\n'){
            counter++;

        }
    }
    return counter;
}
