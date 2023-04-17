https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/************************************************************************/
/* File Name : lc4.c 													*/
/* Purpose   : This file contains the main() for this project			*/
/*             main() will call the loader and disassembler functions	*/
/*             															*/
/* Author(s) : tjf and you												*/
/************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "lc4_memory.h"
#include "lc4_hash.h"
#include "lc4_loader.h"
#include "lc4_disassembler.h"

/* program to mimic pennsim loader and disassemble object files */

int main (int argc, char** argv) {

	/**
	 * main() holds the hashtable &
	 * only calls functions in other files
	 */

	/* step 1: create a pointer to the hashtable: memory 	*/
	lc4_memory_segmented* memory = NULL ;

	/* step 2: call create_hash_table() and create 4 buckets 	*/


	/* step 3: determine filename, then open it		*/
	/*   TODO: extract filename from argv, pass it to open_file() */


	/* step 4: call function: parse_file() in lc4_loader.c 	*/
	/*   TODO: call function & check for errors		*/


	/* step 5: repeat steps 3 and 4 for each .OBJ file in argv[] 	*/


	/* step 6: call function: reverse_assemble() in lc4_disassembler.c */
	/*   TODO: call function & check for errors		*/


	/* step 7: call function: print out the hashtable to output file */
	/*   TODO: call function 				*/


	/* step 8: call function: delete_table() in lc4_hash.c */
	/*   TODO: call function & check for errors		*/


	/* only return 0 if everything works properly */
	return 0 ;
}
