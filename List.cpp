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

bool find_string_value(string_node *head, string target){
	string_node *p = head;
	while(p != NULL){
		if (p->info == target){
			return 1;
		}
		p = p->next;
	}
	return 0;
}

int find_num_list(string_node *string_head, int_node *int_head, string target){
	int num = 0;
	string_node *p = string_head;
	int_node *c = int_head;
	while(p != NULL){
		if (p->info == target){
			num = c->info;
			break;
		}
		p = p->next;
		c = c->next;
	}
	return num;
}
