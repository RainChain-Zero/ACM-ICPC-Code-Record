//#include<bits/stdc++.h>
#include<iostream>
#define endl "\n"

#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3)

using namespace std;

typedef struct node {
	int col;
	struct node* next;

	node(int c, struct node* n) :col(c), next(n) {}
}Node;

typedef struct list {
	Node* head;
	Node* tail;
}List;

void create(List* l) {
	l->head = new Node(0, NULL);
	l->tail = l->head;
}

void insert(List* l, int a) {
	Node* n = new Node(a, NULL);
	l->tail->next = n;
	l->tail = n;
}

void destory(List* l) {
	Node* q = l->head, * p = q;
	while (p) {
		p = p->next;
		delete q;
		q = p;
	}
}

int main()
{
	ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);

	int n, que, c, t, idx = 0;
	List l;
	cin >> n >> que;
	create(&l);
	//init
	for (int i = 0; i < n; ++i) {
		cin >> c;
		insert(&l, c);
	}

	while (que--) {
		cin >> t;
		Node* q = l.head, * p = q->next;
		while (p) {
			if (p->col == t) break;
			q = p;
			p = p->next;
			idx++;
		}
		//改变位置
		q->next = p->next;
		p->next = l.head->next;
		l.head->next = p;
		//输出答案
		cout << idx+1;
		if (que >= 1)
			cout << " ";
		idx = 0;
	}

	destory(&l);

	return 0;
}

