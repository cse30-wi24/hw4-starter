/**
 * Assignment: SWLife
 * Section: (A, B, C)
 * Class: UCSD CSE30-fall2019
 *
 */
#include "board.h"
#include "cse30life.h"

/**
 * create a new board - STUDENT
 *
 * - malloc a boards structure
 * - set the generation to 0
 * - open the file (if it doesn't exist, return a NULL pointer
 * - read the first line which the number of rows
 * - read the second line which is the number of cols
 * - set the # of rows and # of cols in the boards structure
 * - malloc buf1 and buf2
 * - clear both board buffers
 * - read the file until done.  each row contains a row and a columns separted by
 *   white space
 *     for each line, setCell in the next buffer
 * - swap the buffers
 * - close the file
 * - return the boards pointer
 */
Board *create_board(const char *filename)
{
    return NULL; // TODO: Delete this line and implement function
}

/**
 * delete a board
 *
 * note: this is a deep delete - STUDENT
 * the pointer to the boards structure should be set to NULL
 * after the memory is freed.
 */
void delete_board(Board **bpp)
{
    // TODO
}

/**
 * set all the Cells to 0 - STUDENT
 */
void clear_board(Board *board)
{
    // TODO
}

/**
 * swap the current and next buffers
 */
void swap_buffers(Board *board)
{
    // TODO
}

/**
 * get a cell index
 */
size_t get_index(size_t ncols, size_t row, size_t col)
{
    return 0; // TODO: Delete this line and implement this function.
}
