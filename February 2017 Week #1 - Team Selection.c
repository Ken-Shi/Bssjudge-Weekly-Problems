#include <stdio.h>
#include <stdlib.h>
int binsearch(int array[],int first,int last,int search){
	int middle = (first + last) / 2;
	while (first <= last) {
  		if(array[middle] < search) first = middle + 1;    
  		else if (array[middle] == search) break;
  		else last = middle - 1;
  		middle = (first + last)/2;
 	}
  	return middle;
}
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
int main(){
   	int n,m;
	scanf("%d%d",&n,&m);
	int a[n];
	for(int i = 0;i < n;i++) scanf("%d",&a[i]);
	qsort(a,n,sizeof(int),cmpfunc);
	for(int i = 0;i < m;i++){
		int x,y;
		scanf("%d%d", &x,&y);
		int pos1 = binsearch(a,0,n - 1,x);
		while(a[pos1] >= x && pos1 >= 0) pos1--;
		int pos2 = binsearch(a,0,n - 1,y);
		while(a[pos2] <= y && pos2 <= n - 1) pos2++;
		pos2--;
		printf("%d\n",pos2 - pos1);
	}
   	return 0;   
}
