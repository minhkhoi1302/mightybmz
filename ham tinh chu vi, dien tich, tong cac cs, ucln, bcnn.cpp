#include <stdio.h>
#include <math.h>
float chu_vi(float a,float b,float c){
	return a+b+c;
	}
float dien_tich(float a, float b, float c) {
    float p = chu_vi/2.0;
    return  sqrt(p * (p - a) * (p - b) * (p - c));

	}
int tong_cac_cs(int n) {
    int tong = 0;

    while (n != 0) {
        int cs = n % 10;  
        tong += cs;
        n /= 10;  
    }

    return tong;
}
		
int ucln(int a, int b) {
    for(int i=a;i>0:i--){
    	if(a%i==0&&b%i==0){
    	return i;
			}
		}
		return 1;    	
    }	

int bcnn(int a, int b) {
    for(int i=a; ;i++){
    	if(i%a==0&&i%b==0){
    		return i;
		}	
	}	   	    	
}

