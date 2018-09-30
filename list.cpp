#include <iostream>
#include <cstdlib>
#include "list.h"

using namespace std;

List::List(){ pHead = NULL, pCur = NULL, pTemp = NULL; }

void List::insertNode(int data1){
nodePtr n1 = new node;
n1->pNext = NULL;
n1->data = data1;

//Short circuit eval
if(pHead == NULL || pHead->data >= n1->data){
n1->pNext = pHead;
pHead = n1;
} else {
	pCur = pHead;
	while(pCur->pNext != NULL && pCur->pNext->data < n1->data){
		pCur = pCur->pNext;
	}
	n1->pNext = pCur->pNext;
	pCur->pNext = n1;
	}
}

void List::printList(){
pCur = pHead;
while(pCur != NULL){
cout << pCur->data << endl;
pCur = pCur->pNext;
	
}
}

int List::findMax(){
	pCur = pHead;
	int max = pCur->data;
	while(pCur != NULL){
		if(max < pCur->data){
			max = pCur->data;
		}
		pCur = pCur->pNext;
	}
	return max;
}

int List::findMin(){
	pCur = pHead;
	int min = pCur->data;
	while(pCur != NULL){
		if(min > pCur->data){
			min = pCur->data;
		}
		pCur = pCur->pNext;
	}
	return min;
}

int List::findMed(){
	pCur = pHead;
	int count = 0, i = 0, j = 0;
		
	for(i; pCur != NULL; i++)
		pCur = pCur->pNext;
	
	pCur = pHead;
	for(j; j < i / 2; j++)
		pCur = pCur->pNext;

	return pCur->data;
}




