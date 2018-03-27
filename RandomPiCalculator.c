#include<stdio.h>
#include <stdlib.h>
#include <time.h>

float r = 1.0;

float random_float(const float min, const float max)
{
    if (max == min) return min;
    else if (min < max) return (max - min) * ((float)rand() / RAND_MAX) + min;

    // return 0 if min > max
    return 0;
}


void piper(){
 double pi, ranx, rany, dis;
 double PI = 3.1415926535;
 double dif = 3000.0,diff;
 
 long long int tot=0,cir=0;
 int i;
 while(1){
 		
                ranx = random_float(-r, r);
                rany = random_float(-r, r);
                dis = (ranx*ranx)+(rany*rany);
                if(dis < r*r)
                        ++cir;
                ++tot;
        	pi = 4.0*((double)cir/tot);
          
        	if(pi>PI)
        		diff = pi-PI;
        	else
        		diff = PI-pi;
        	
          if(dif > diff){
        		dif = diff;
        		printf("\n%.10f",pi);
        	}
   
 }
 
}

int main(){
 srand(time(NULL));
 piper();
 return 0;
}
