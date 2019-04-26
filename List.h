#ifndef _CUSTOMERIZED_LIST_
#define _CUSTOMERIZED_LIST_

#include <string>
#include <iostream>
using namespace std;

struct string_node
{
	string info;
	string_node *next;
};

struct int_node
{
	int info;
	int_node *next;
};

void append_string_list(string_node *&head, string info);

void append_int_list(int_node *&head, int info);

void print_string_list(string_node *head);

void print_int_list(int_node *head);

string value_string_node(string_node *head, int count);

int value_int_node(int_node *head, int count);

bool find_string_value(string_node *head, string target);

int find_num_list(string_node *string_head, int_node *int_head, string target);

#endif
