#include "List.h"

void append_string_list(string_node *&head, string input){
	string_node *p = new string_node;
	p->info = input;
	p->next = NULL;
	string_node *c = head;
	if (head == NULL){
		head = p;
	}
	else{
		while (c->next != NULL){
			c = c->next;
		}
		c->next = p;
	}
}

void append_int_list(int_node *&head, int input){
	int_node *p = new int_node;
	p->info = input;
	p->next = NULL;
	int_node *c = head;
	if (head == NULL){
		head = p;
	}
	else{
		while (c->next != NULL){
			c = c->next;
		}
		c->next = p;
	}
}

void print_string_list(string_node *head){
	string_node *p = head;
	while (p != NULL){
		cout << p->info;
		p = p->next;
	}
}

void print_int_list(int_node *head){
	int_node *p = head;
	while (p != NULL){
		cout << p->info;
		p = p->next;
	}
}

string value_string_node(string_node *head, int count){
	int current = 0;
	string target = "-1";
	string_node *p = head;
	while (p != NULL && current <= count){
		if (count == current){
			target = p->info;
			break;
		}
		else{
			p = p->next;
			count--;
		}
	}
	return target;
}

int value_int_node(int_node *head, int count){
	int target = -1, current = 0;
	int_node *p = head;
	while (p != NULL && current <= count){
		if (count == current){
			target = p->info;
			break;
		}
		else{
			p = p->next;
			count--;
		}
	}
	return target;
}
