/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        if(head == NULL || head->next == NULL) return head ;
        
        Node zeroDummy(0) ,oneDummy(0) ,twoDummy(0) ;
        
        Node* zero = &zeroDummy ;
        Node* one = &oneDummy ;
        Node* two = &twoDummy ;
        
        Node* temp = head ;
        
        while(temp != NULL){
            if(temp->data == 0){
                zero->next = temp ;
                zero = zero->next ;
            }else if(temp->data == 1){
                one->next = temp ;
                one = one->next ;
            }else{
                two->next = temp ;
                two = two->next ;
            }
            
            temp = temp->next ;
        }
        
        two->next = NULL ;
        
        zero->next = oneDummy.next ? oneDummy.next : twoDummy.next;
        one->next = twoDummy.next;
        
        if (zeroDummy.next != NULL) return zeroDummy.next;
        if (oneDummy.next != NULL) return oneDummy.next;
        return twoDummy.next;
    }
};
