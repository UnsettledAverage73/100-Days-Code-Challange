// Structure of binary tree node
struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};

// Preorder traversal algorithm
void Preorder(struct Node* root){
	if (root == NULL)
		return;

	// Step1 :T Visit the root node
	printf("%d ", root->data);

	// Step2 : Traverse the left subtree
	Preorder(root->left);

	// Step 3 : Traverse the right subtree
	Preorder(root-> right);

}
