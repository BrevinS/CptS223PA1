#ifndef LIST_H
#define LIST_H
class List{
	private:

	typedef struct node {
		int data;
		node *pNext;
	} *nodePtr;

	nodePtr pHead;
	nodePtr pCur;
	nodePtr pTemp;

	public:
		List();
		void insertNode(int data1);
		void printList();
		//After list is constructed test for these
		//int findMed(int data);
		int findMax();
		int findMin();
		int findMed();
};

//int findMed(struct nodePtr pHead);
#endif
