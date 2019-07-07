#include <stdlib.h>

struct s_node {
	void *content;
	struct s_node *next;
};

struct s_queue {
	struct s_node *first;
	struct s_node *last;
};

static struct s_node *node(void *content, struct s_node *next) {
	struct s_node *n = malloc(sizeof(struct s_node));
	if (n)
		*n = (struct s_node){content, next};
	return (n);
}

struct s_queue *init(void) {
	struct s_queue *q = NULL;
	if ((q = malloc(sizeof(struct s_queue))))
		*q = (struct s_queue){NULL, NULL};
	return (q);
}

void enqueue(struct s_queue *queue, void *content){
	struct s_node *n;

	if (!queue || !content)
		return ;
	if ((n = node(content, NULL))) {
		if (queue->first)
			queue->last = queue->last->next = n;
		else
			queue->first = queue->last = n;
	}
}

void *dequeue(struct s_queue *queue) {
	void *c = NULL;

	if (queue && queue->first) {
		c = queue->first->content;
		queue->first = queue->first->next;
		if (!queue->first)
			queue->last = NULL;
	}
	return (c);
}

void *peek(struct s_queue *queue) {
	return (queue && queue->first) ? queue->first->content : NULL;
}

int isEmpty(struct s_queue *queue) {
	return (queue && !queue->first);
}
