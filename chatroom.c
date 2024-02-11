// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char str[100];
    int i=0,flag=0;
    scanf("%s",&str);
    while(str[i]!='\0'){
    	int j=i+1;
    	if(str[i]=='h'){
    		while(str[j]!='\0'){
    			int k=j+1;
    			if(str[j]=='e'){
    				while(str[k]!='\0'){
    					int l=k+1;
    					if(str[k]=='l'){
    						while(str[l]!='\0'){
    							int m=l+1;
    							if(str[l]=='l'){
    								while(str[m]!='\0'){
    									if(str[m]=='o'){
    										flag++;
										}
										m++;
									}
								}
								l++;
							}
						}
						k++;
					}
				}
				j++;
			}
		}
		i++;
	}
	if(flag==0){
		printf("NO");
	}
	else{
		printf("YES");
	}
    return 0;
}