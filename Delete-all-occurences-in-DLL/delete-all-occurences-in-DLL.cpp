class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};

class Solution {
  public:
    Node* deleteAllOccurOfX(Node* head, int x) {
        // code here
        if(head == NULL) return NULL ;
        
        Node* temp = head ;
        Node* pre = NULL ;

        while(temp != NULL){
            if(temp->data == x){
                if(temp == head) head = head->next ;
                
                Node* curr = temp ;
                temp = temp->next ;
                
                if(pre != NULL) pre->next = temp ;
                if(temp != NULL) temp->prev = pre ;
                delete curr ;
            }else{
                pre = temp ;
                temp = temp->next ;
            }
        }
        
        return head ;
    }
};
