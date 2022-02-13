 Node * insert (Node * root ,int value ) {
        if (root == NULL )
            return new Node (value) ;
        if (value>root->data)
            root->right= insert(root->right , value) ;
        else
            root->left= insert(root->left , value); 
        return root ; 
        }

