Node* RemoveLoop(Node* head){
Node* slow=head;
Node* fast=head->next;
Node* i = head;
while(i->next!=nullptr){
if(slow==i || fast==i){
break;
}
else if( slow == fast) i=i->next;
}
while (slow->next != i){
slow = slow->next;
}
slow->next = nullptr;
return head;
}
