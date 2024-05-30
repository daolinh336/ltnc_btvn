

          Node* removeDuplicates(Node *head)
          {
              if(head == NULL || head->next == NULL)return head;
              Node * res = new Node(head->data);
              res = head;
            while(head->next != NULL)
            {
                if((head->data)== (head->next) -> data)
                head->next = (head -> next) -> next;
                else head = head -> next;
            }
            return res;

          }


