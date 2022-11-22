#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node *hare, *tor;
    if(head == NULL || head->next == NULL)
    {
	  return 0;
    }
    hare = head->next;
    tor = head;
    while(hare != NULL && hare->next != NULL && hare != tor)
    {
	  hare = hare->next->next;
	  tor = tor->next;
    }
    if(hare == tor)
	  return 1;  
    return 0;
}
