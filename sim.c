#include "sim.h"

#define C_IMPL
extern void asm_do_row(Cell *, Cell *, uint32_t, uint32_t, uint32_t);

/**
 * gets x mod N (works for negative numbers as well! Use this instead of %)
 */
uint32_t mod(int x, uint32_t N)
{
    return (x + x / N * N) % N;
}

/**
 * process one row of the board
 */
static void do_row(Cell *dest, Cell *src, uint32_t row, uint32_t rows, uint32_t cols)
{
    // TODO
}

/**
 * perform a simulation for "steps" generations
 *
 * for steps
 *   calculate the next board
 *   swap current and next
 */
void sim_loop(Board *board, unsigned int steps)
{
    // TODO
}
