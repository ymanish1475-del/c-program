#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#define null 0
struct node
{
    int data;
    node *next;

};
node *first,*temp,*P,*r,*ptemp,*pttemp,
*ntemp,*nttemp
void init(){
    first=new node;
    first=next=null;
    cin>>first data;
}
void Add_note(){
    temp=first;
    whiule (temp->next NULL){
        temp=temp->next;
    }
    ttemp=new node;
    ttemp->next:NULL;
    cin>>ttemp->next=ttemp;
}