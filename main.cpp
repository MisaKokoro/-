#include <iostream>
#include <stdio.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int n)
    {
        data = n;
        next = nullptr;
    }
};

int main()
{
    Node *p1 = new Node(1);
    Node *p2 = new Node(2);
    //将两个节点连起来
    p1->next = p2;
    //验证链接是否成功
    while (p1)
    {
        cout << p1->data << endl;
        p1 = p1->next;
    }
}