#include <stdio.h>
#include <stdlib.h>
//#include <string.h>


int cmp(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

// Complete the getMinimumCost function below.
int getMinimumCost(int k, int c_count, int* c) {
    int sum = 0;
    int j = 0;
    int temp = 0;
    
    qsort(c,c_count,sizeof(int),cmp);
    
    for (int i = c_count-1; i >= 0; i --) {
        temp = (j/k) + 1;
        sum = sum + (temp * c[i]);
        j++;
    }
    return sum;
}

int main(int argc, char *argv[])
{
	int n,k;
	int c[n];
	
	//printf("[No. Of Flowers To Buy] [Friends Present]\n");
	scanf("%d %d", &n, &k);
	
	//n Is The Number Of Flowers To Buy
	//k Is The Number Of Friends Present
	
	/*
	if (k > n) {
		printf("*Kicks All Out*, \n*Yells* Those People Are Not Allowed Here, Who Don't Want To Buy Flowers");
		printf("Error. Please Try Again.\n");
		return 0;
	}
	*/
	
	//printf("\n\n[All Flowers Price]\n\n");
	for(int i = 0; i < n; i++)
		scanf("%d", &c[i]);
	
	int ans = getMinimumCost(k, n, c);
	printf("%d",ans);
	
	return 0;
}