#include "variadic_functions.h"
#include <stdarg.h>
/**
 * @n is the number of all integers                                                                                                     
 *
 *  *@.. variable number of parameters                                                                                                  
 *   *                                                                                                                              
 *    * retur if n==0                                                                                                                   
 *     * else return the sum of numbers                                                                                                
 *
 *      */                                                                                                                                                                                                                                                                 
int sum_them_all(const unsigned int n, ...)                                                                                            
{                                                                                                                                       
	va_list number;                                                                                                                
	unsigned int index , sum = 0;                                                                                                           	
	va_start(number, n);                                                                                                                    
	for (index=0; index<n; index++) 
		 sum+= va_arg(number, int);                                                                                      
	va_end(number);                                                                                                                         	
	return (sum);                                                                                                                           
}

