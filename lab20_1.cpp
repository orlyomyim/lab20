#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
    double A,B,C,D,E,F ;
    if(R1.x > R2.x){
        A = R1.x ;
        }
    else{ 
        A = R2.x ;
        }
        
    if(R1.y < R2.y){
        B = R1.y ;
        }
    else{
        B = R2.y ;
        }
        
    if(R1.x+R1.w < R2.x+R2.w){
        C = R1.x+R1.w ;
        }
    else{
        C = R2.x+R2.w ;
        }
        
    if(R1.y-R1.h > R2.y-R2.h){ 
        D = R1.y-R1.h ;
        }
    else{ 
        D = R2.y-R2.h ;
        }
        
    E = C-A ;
    F = B-D ;
    
    if(E >= 0 and F >= 0 ){
        return E*F ;
        }
    else{
        return 0 ;
        }
    

}