#include<iostream>
using namespace std;

struct node{
int data;
node *next;
};

struct node * start=NULL;

int main(){
node *temp,*t,*ptr;
int pos,i=0,choice=0;
while(choice<=7){
 cout<<"press 1 to insert from beginning"<<endl;
    cout<<"press 2 to insert from end"<<endl;
    cout<<"press 3 to insert at any position"<<endl;
    cout<<"press 4 to delete from end"<<endl;
    cout<<"press 5 to delete from begin"<<endl;
    cout<<"press 6 to delete from at any position"<<endl;
    cout<<"press 7 to display"<<endl;
    cout<<"press 0 to exit"<<endl;
    cin>>choice;
    temp=new node();

    if(choice==1){
    cout<<"enter the number"<<endl;
    cin>>temp->data;

        if(start==NULL){
            start=temp;
            temp->next=start;

               }
            else{
                t=start;
                while(t->next!=start){
                t=t->next;
                }
                temp->next=start;
                start=temp;
                t->next=start;}
        }
    if(choice==2){
    cout<<"enter the number"<<endl;
    cin>>temp->data;
        if(start==NULL){
            start=temp;
           temp->next=start;
            }
    else{
        t= start;
        while(t->next!=start){
            t=t->next;
        }

        t->next=temp;
        temp->next=start;
    }
    }
    if(choice==3){
    cout<<"enter the number"<<endl;
    cin>>temp->data;
    cout<<"enter the position"<<endl;
    cin>>pos;
            if(pos==1){
                if(start==NULL){
            start=temp;
           temp->next=start;
            }
            else{
            t=start;
                while(t->next!=start){
                t=t->next;
                }
                temp->next=start;
                start=temp;
                t->next=start;
            }
            }
            else if(pos>1){
            t=start;
            while(i<pos){
                ptr=t;
                t=t->next;
                i++;
            }
            ptr->next=temp;
            temp->next=t;

            }
    }
    if(choice==4){
        if(start==NULL)
            cout<<"empty";
        else{
            t=start;
            while(t->next!=start){
            ptr=t;
            t=t->next;}
            ptr->next=start;
        }
    }

     if(choice==5){
        if(start==NULL)
            cout<<"empty";
        else{
         t=start;
           while(t->next!=start){
            t=t->next;
            }
          start=start->next;
          t->next=start;

            }
        }



    if(choice==7){
        t=start;
        temp=start;
      while(t->next!=start){
            cout<<t->data<<" ";
            t=t->next;
        }//cout<<t->data<<" ";
        cout<<start->data<<endl;

    }
    }
}
