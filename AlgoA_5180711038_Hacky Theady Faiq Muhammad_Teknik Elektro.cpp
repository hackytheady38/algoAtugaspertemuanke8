#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace::std;

struct mencari{
    double nilai[10];
};


double input(string text){
    mencari oke;
    double nilai;
    int i;
    for (i=0;i<=0;i++)
    {
    cout<<"\ninput nilai "<<text<<"=";
    cin>>oke.nilai[10];
    }
    return nilai;
}


void grade(double nilai){
    if(nilai>81){
        cout<<"A";}
    else if(nilai>61){
        cout<<"B";}
    else if(nilai>41){
        cout<<"C";}
    else if(nilai>41){
        cout<<"D";}
    else {cout<<"E";}
    }


main(){
    double uts,uas,tugas,absen,nilai,total;
    uts=input("uts");
    uas=input("uas");
    tugas=input("tugas");
    absen=input("absen");
    nilai=uts*0.2+uas*0.3+tugas*0.35+absen*0.15;
    cout<<"total :";cout<<nilai;
    cout<<endl;
    grade(nilai);
    cout<<endl;


}





