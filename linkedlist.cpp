#include <iostream>

using namespace std;
struct node{
  int data;
  struct node *next;

};
class linkedlist{

    private:
    node *head ,*tail;

    public:
    linkedlist(){
        head = NULL;
        tail = NULL ;
    }
    void addNode(int n){
        node*tmp = new node;
          tmp->data = n;
        tmp->next= NULL;
         //1 ->null
        if(head == NULL){

           head=tmp;
           tail=tmp;

        }
        else{
            tail->next = tmp;
            tail= tail->next;

        }


    }
       void display()
    {
        node *tmp;
        tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }

};
int main()
{
    linkedlist a;
    a.addNode(1);
   a.addNode(2);
    a.addNode(3);
    a.display();
    return 0;
}
