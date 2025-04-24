#include<iostream>
#include<array>
using namespace std;
int Two_sum()
{    
array<int, 5> arr= {2,3,7,11,4}; 
int target=7;
int  i,j;
for( i = 0 ; i< arr.size(); i++)
{
    for( j = i+1;  j< arr.size(); j++)
    {
        if(arr[i] + arr[j] == target)
        {
            cout<<"index" <<i <<endl ;
            cout<<"index" <<j <<endl ;
            
        }
    }
}
return 0;
}
int main(){
Two_sum();

}