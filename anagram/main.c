#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

bool checkAnagram(char*,char*);

bool checkAnagram(char* s, char* t){
	if(strlen(s)==strlen(t)) {
		/*int count=strlen(s);
		int i=0;
		while(s[i]){
		}*/
		return true;
	}
	return false;
}

typedef struct heap_s {
	int* arr;
	int count=0;
}heap;

int parent(int index){
	return (index-1)/2;
}
int left(int index){
	return (2*index+1);
}
int right(int index){
	return (2*index+2);
}
void swap(int *a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void insert(heap *h, int elem){
	if(h->count==0){
	 h->arr =(int*)malloc(sizeof(int));
	 h->arr[h->count]=elem;
	 h->count++;
	}
	else{
	 h->arr=(int*)realloc(h->arr,(h->count)*sizeof(int));
	 h->arr[h->count]=elem;
	 heapify(h);
         h->count++;
	}
}
void heapify(heap* h){
		int idx=h->count;
		while(idx!=0){
		 if(h->arr[parent(idx)]>h->arr[idx]){
		  swap(h->arr[parent(idx)],h->arr[idx]);

		 }
		 idx=parent(idx);
		}
	
}



int main(){
	bool t=checkAnagram("Mehra","eshan");
	printf("%d\n",t);
	printf("%d\n",'\0');
	return 0;
}

