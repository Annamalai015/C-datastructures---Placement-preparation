
#include <stdlib.h>
#include <stdio.h>
struct Node
{
  int data;
  struct Node *next;
};
struct Node *head;
void
insert (int x)
{
  struct Node *temp = (struct Node *) malloc (sizeof (struct Node));
  temp->data = x;
  temp->next = head;
  head = temp;
}

void print ()
{
  struct Node *temp = head;
  printf ("The List is: ");
  while (temp != NULL)
    {
      printf ("->%d", temp->data);
      temp = temp->next;
    }
  printf ("\n");
}

int main ()
{
  int n, x, i;
  printf ("How many numbers\n");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      printf ("Number to insert");
      scanf ("%d", &x);
      insert (x);
      print ();
    }

  return 0;
}
