#include <stdio.h>
int main () {
    int number;
    int tong ;
    int i;
    int chan =0;
    int le =0;
    printf("nhap vao 5 so nguyen\n");
    for(int i=1;i<=5;i++){
    	scanf("%d",&number);
    	if(number %2 == 1) {
    		tong = tong + number;
    		le = le + 1;
		}else{
			chan = chan + 1;
			
		}
}
    	    printf ("tong cac so le %d\n", tong );
    	    printf ("so chan %d\n", chan );
    	    printf ("so le %d\n", le );
	return 0 ;
}
    	
    
