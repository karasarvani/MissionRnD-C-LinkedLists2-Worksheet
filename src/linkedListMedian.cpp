/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	struct node *temp;
	int length = 0, i, k;
	if (head == NULL)
		return -1;
	temp = head;
	while (temp != NULL)
	{
		length++;
		temp = temp->next;
	}
	if (length % 2 == 0)
		k = (length / 2) - 1;
	else
		k = length / 2;
	temp = head;
	for (i = 1; i <= k; i++)
	{
		temp = temp->next;
	}
	if (length % 2 == 0)
	{
		return ((temp->num) + (temp->next->num)) / 2;
	}
	else
	{
		return temp->num;
	}
}
