#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *pLeft;
    struct node *pRight;
};

typedef struct node NODE;
typedef NODE* TREE;

void createTree(TREE &t) {
    t = NULL;
}

void addNodeToTree(TREE &t, int x) {
    if (t == NULL)
	{
		NODE *p = new NODE;
		p->data = x;
		p->pLeft = NULL;
		p->pRight = NULL;
		t = p;
	}
    else
 	{
		if (t->data > x)
		{
			addNodeToTree(t->pLeft, x);
		}
		else if (t->data < x)
		{
			addNodeToTree(t->pRight, x);
		}
	}
}
void Duyet_NLR(TREE t)
{
	if (t != NULL)
	{
		cout << t->data << " ";
		Duyet_NLR(t->pLeft);
		Duyet_NLR(t->pRight);
	}
}

void Menu(TREE &t)
{
	while (true)
	{
		cout << "\n\n\t\t =========== MENU ===========";
		cout << "\n1. Nhap du lieu";
		cout << "\n2. Xuat du lieu cay NLR";
		cout << "\n0. Ket thuc";
		int luachon;

		cout << "\nNhap lua chon: ";
		cin >> luachon;
		if (luachon < 0 || luachon > 2)
		{
			cout << "\nLua chon khong hop le";
		}
		else if (luachon == 1)
		{
			int x;
			cout << "\nNhap so nguyen x: ";
			cin >> x;
			addNodeToTree(t, x);
		}
		else if (luachon == 2)
		{
			cout << "\n\t\t DUYET CAY THEO NLR\n";
			Duyet_NLR(t);
		}
		else
		{
			break;
		}
	}
}
NODE searchElement(TREE &t) {
    int k;
    cout << "Nhap gia tri can tim kiem: ";
    cin >> k;
}
int main()
{
    TREE t;
	createTree(t);
	Menu(t);
    return 0;
}
