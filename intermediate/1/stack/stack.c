/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 15:04:50 by cbrill            #+#    #+#             */
/*   Updated: 2019/05/15 15:08:50 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct		s_node {
	void			*content;
	struct s_node	*next;
} node;

typedef struct		s_stack {
	struct s_node	*top;
} stack;

struct s_stack *init(void) {
	stack *s;

	if ((s = malloc(sizeof(stack))))
		*s = (stack){NULL};
	return (s);
}

void *peek(struct s_stack *stack) {
	return ((stack && stack->top)? stack->top->content : NULL);
}

int isEmpty(struct s_stack *stack) {
	return (stack && !stack->top);
}

void push(struct s_stack *stack, void *content) {
	node *n;

	if (stack && (n = malloc(sizeof(node)))) {
		*n = (node){content, stack->top};
		stack->top = n;
	}
}

void *pop(struct s_stack *stack) {
	void *n;

	if ((n = peek(stack)))
		stack->top = stack->top->next;
	return (n);
}

/*
#include <stdio.h>

static void pprint(stack *s) {
	node *n = s->top;

	printf("%s", "[ ");
	while (n) {
		printf("%s%s", n->content, n->next? " " : "");
		n = n->next;
	}
	printf("%s", " ] \n");
}

int main(void) {
	char *words[] = {"here\'s", "a", "list", "of", "words.", 0};
	stack *s = init();
	int i = 0;
	printf("Empty? %s\n", isEmpty(s)? "Y" : "N");
	printf("Peek: <%s>\n", peek(s));
	while (words[i])
		push(s, words[i++]);
	pprint(s);
	printf("Pop: <%s>\n", pop(s));
	pprint(s);
	printf("Peek: <%s>\n", peek(s));
	return (0);
}
*/
