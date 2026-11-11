/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head == NULL) return NULL ;
        Node* prev ;
        
        if(x == 1){
            Node* temp = head ;
            head = head->next ;
            delete(temp) ;
            return head ;
        }
        
        Node* temp = head ;
        while(x != 1){
            
            prev = temp ;
            temp = temp->next ;
            
            if(temp == NULL) return head ;
            
            x-- ;
        }
        
        prev->next = temp->next ;
        delete(temp) ;
        
        return head ;
    }
};
