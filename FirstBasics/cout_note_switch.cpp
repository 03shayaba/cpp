#include<iostream>
using namespace std;
int main(){
    int total_amount;
    int note_100 = 0,note_50 = 0, note_20 = 0, note_1 = 0;
    cout<<"enter a total amount"<<endl;
    cin>>total_amount;
    switch(1){
        case 1:
        if(total_amount >= 100){
            note_100 = total_amount/100;
            total_amount %= 100 ; 
        }
        case 2:
        if(total_amount >= 50){
            note_50 = total_amount/50;
            total_amount %= 50 ; 
        }
        case 3:
        if(total_amount >= 20){
            note_20 = total_amount/20;
            total_amount %= 20 ; 
        }
        case 4:
        if(total_amount >= 1){
            note_1 = total_amount;
        }
        
    }
    cout<<"the note_100 is needed in "<<total_amount<<" "<<note_100<<endl;
    cout<<"the note_50 is needed in "<<total_amount<<" "<<note_50<<endl;
    cout<<"the note_20 is needed in "<<total_amount<<" "<<note_20<<endl;
    cout<<"the note_1 is needed in "<<total_amount<<" "<<note_1<<endl;
}