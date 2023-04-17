https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/************************************************************************/
/* File Name : lc4_memory.c		 										*/
/* Purpose   : This file implements the linked_list helper functions	*/
/* 			   to manage the LC4 memory									*/
/*             															*/
/* Author(s) : tjf and you												*/
/************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "lc4_memory.h"


/*
 * adds a new node to linked list pointed to by head
 */
int add_to_list (row_of_memory** head,
		 		 unsigned short int address,
		 		 unsigned short int contents)
{

	/* allocate memory for a single node */

	/* populate fields in newly allocated node with arguments: address/contents */

	/* make certain to set other fields in structure to NULL */

	/* if head==NULL, node created is the new head of the list! */

	/* otherwise, insert the node into the linked list keeping it in order of ascending addresses */

	/* return 0 for success, -1 if malloc fails */

	return 0 ;
}


/*
 * search linked list by address field, returns node if found
 */
row_of_memory* search_address (row_of_memory* head,
			        		   unsigned short int address )
{
	/* traverse linked list, searching each node for "address"  */

	/* return pointer to node in the list if item is found */

	/* return NULL if list is empty or if "address" isn't found */

	return NULL ;
}

/*
 * search linked list by opcode field, returns node if found
 */
row_of_memory* search_opcode (row_of_memory* head,
				      		  unsigned short int opcode  )
{
	/* traverse linked list until node is found with matching opcode
	   AND "assembly" field of node is empty */

	/* return pointer to node in the list if item is found */

	/* return NULL if list is empty or if no matching nodes */

	return NULL ;
}

/*
 * delete the node from the linked list with matching address
 */
int delete_from_list (row_of_memory** head,
			          unsigned short int address ) 
{
	/* if head isn't NULL, traverse linked list until node is found with matching address */

	/* delete the matching node, re-link the list */

	/* make certain to update the head pointer - if original was deleted */

	/* return 0 if successfully deleted the node from list, -1 if node wasn't found */

	return 0 ;

}

void print_list (row_of_memory* head, 
				 FILE* output_file )
{
	/* make sure head isn't NULL */

	/* print out a header to output_file */

	/* traverse linked list, print contents of each node to output_file */

	return ;
}

/*
 * delete entire linked list
 */
void delete_list (row_of_memory** head )
{
	/* delete entire list node by node */
	/* set head = NULL upon deletion */

	return ;
}