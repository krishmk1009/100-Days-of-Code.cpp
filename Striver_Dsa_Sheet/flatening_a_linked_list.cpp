Node *flatten(Node *root)
{
   // Your code here
   Node *ptr=root;
   vector<int>ans;
   while(ptr!=NULL){
       Node *temp=ptr;
       while(temp!=NULL){
           ans.push_back(temp->data);
           temp=temp->bottom;
       }
       ptr=ptr->next;
    }
    sort(ans.begin(),ans.end());
    Node *head=new Node(ans[0]);
    ptr=head;
    int i=1;
    while(i<ans.size()){
        Node *temp=new Node(ans[i]);
        ptr->bottom=temp;
        ptr=temp;
        i++;
    }
    return head;
}

