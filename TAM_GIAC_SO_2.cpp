#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n; scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			if(i % 2 == 0) printf("%d", 2 * j + 1);
			else printf("%d", 2 * j + 2);
		}
		printf("\n");
	}
    return 0;
}
