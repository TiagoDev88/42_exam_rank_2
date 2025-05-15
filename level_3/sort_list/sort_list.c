// #include <stdio.h>
// #include <stdlib.h>

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }
#include "list.h"


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *tmp = lst;
	int temp = 0;

	while (tmp->next)
	{
		if (cmp(tmp->data,tmp->next->data) == 0)
		{
			temp = tmp->data;
			tmp->data = tmp->next->data;
			tmp->next->data = temp;
			tmp = lst;
		}
		else
			tmp = tmp->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list *l1 = (t_list *)malloc(sizeof(t_list));
// 	t_list *l2 = (t_list *)malloc(sizeof(t_list));
// 	t_list *l3 = (t_list *)malloc(sizeof(t_list));
// 	t_list *l4 = (t_list *)malloc(sizeof(t_list));
// 	t_list *curr;

// 	int a = -63;
// 	int b = 0;
// 	int c = -87;
// 	int d = 3;

// 	l1->data = a;
// 	l2->data = b;
// 	l3->data = c;
// 	l4->data = d;

// 	l1->next = l2;
// 	l2->next = l3;
// 	l3->next = l4;
// 	l4->next = NULL;

// 	curr = sort_list(l1, &ascending);
// 	while (curr)
// 	{
// 		printf("%d\n", curr->data);
// 		curr = curr->next;
// 	}
// 	free(l1);
// 	free(l2);
// 	free(l3);
// 	free(l4);
// } 