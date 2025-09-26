/**
 * @file ps.c
 * @author Joaquin Garcia (joaquin.garcia@student.nmt.edu)
 * @brief Simple user program for testing cps syscall.
 * @version 0.1
 * @date 2025-09-26
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  cps();   // call the syscall
  exit(0);
}