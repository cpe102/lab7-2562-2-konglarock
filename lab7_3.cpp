//status = "ONE-NIGHT-STAND";
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int old,hight,money;
    cout<<"How old are you?: ";
    cin>> old;
    if (old<20){
        cout<<"What is your hight?: ";
        cin>> hight;
        if (hight<160){
            cout<<"status = UNFRIRND";
        }
        else
        {
            if (hight<175)
            cout<<"status = FRIRND";
            else{
                cout<<"kasinsod: ";
                cin>> money;
                if (money>69*pow(10,6))
                {
                    cout<<"status = MARRIED";
                }
                else
                {
                    cout<<"status = ONE-NIGHT-STAND";
                }
                
                
            }
            
            
        }
        
            
    }
    else
    {
        if(old<30){
            cout<<"kasinsod: ";
            cin>> money;
            if (money>pow(10,7)){
                cout<<"status = BEST FRIRND";
            }
            else
            {
                cout<<"status = UNFRIRND";
            }
            

        }
        else
        {
            cout<<"status = UNFRIRND";
        }
        
            
    }
    
    
    
}