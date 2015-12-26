struct node
{
	int val;
	node *next;
};


void first(int val, node **top);
void push(int val, node **top);
int pop(node **top);
void print(node *top);
void printDel(node *top);
