#include <bits/stdc++.h>
using namespace std;

// Link list node
struct node
{
	int data;
	struct node *next;
};

void printMiddle(struct node *head)
{
	int l = 0;
	node *ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		l++;
	}
	if (l & 1 == 0)
	{
		node *ptr = head;
		int i = 0;
		while (ptr != NULL && i <= l / 2)
		{
			ptr = ptr->next;
			i++;
		}
		return ptr->data;
	}
	else
	{
		node *ptr = head;
		int i = 0;
		while (ptr != NULL && i < l / 2)
		{
			ptr = ptr->next;
			i++;
		}
		return ptr->data;
	}
}

void push(struct node **head_ref, int new_data)
{

	// Allocate node
	struct node *new_node = (struct node *)malloc(
		sizeof(struct node));

	// Put in the data
	new_node->data = new_data;

	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

void printList(struct node *ptr)
{
	while (ptr != NULL)
	{
		printf("%d->", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}

// Driver code
int main()
{

	// Start with the empty list
	struct node *head = NULL;
	int i;

	for (i = 5; i > 0; i--)
	{
		push(&head, i);
		printList(head);
		printMiddle(head);
	}
	return 0;
}
