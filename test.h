/**
 * @file test.c
 * @author Dan
 * @version 2.0
 * @date 2021-12-12
 */

#include <stdbool.h>

/**
 *  test work of function my_strlen  
 * @return true function work correctly
 * @return false function isn't work correctly
 */
bool Test_my_strlen();

/**
 *  test work of function my_strcpy  
 * @return true function work correctly
 * @return false function isn't work correctly
 */
bool Test_my_strcpy();

/**
 *  test work of function my_strchr  
 * @return true function work correctly
 * @return false function isn't work correctly
 */
bool Test_strchr();

/**
 *  test work of function my_strdup
 * @return true function work correctly
 * @return false function isn't work correctly
 */
bool Test_strdup();

/**
 *  test work of function my_strstr 
 * @return true function work correctly
 * @return false function isn't work correctly
 */
bool Test_strstr();

/**
 *  test work of function my_memchr 
 * @return true function work correctly
 * @return false function isn't work correctly
 */
bool Test_memchr();

/**
 *  test work of function my_memset  
 * @return true function work correctly
 * @return false function isn't work correctly
 */
bool Test_memset();

/**
 *  test work of function my_memcpy 
 * @return true function work correctly
 * @return false function isn't work correctly
 */
bool Test_memcpy();

/**
 * stop program if one of previos function isn't working 
 */
void Run_all_tests();