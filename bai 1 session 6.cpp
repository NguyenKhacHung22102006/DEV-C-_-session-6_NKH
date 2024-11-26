#include <stdio.h>
int main () {
    int number;
    int tong ;
    int i;
    printf("nhap vao 5 so nguyen\n");
    for(int i=1;i<=5;i++){
    	scanf("%d",&number);
    	if(number %2 == 1) {
    		tong = tong + number;
		}
}
    	    printf ("tong cac so le %d\n",tong);
	return 0 ;
}
    	
    
