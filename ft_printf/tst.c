#include <stdarg.h>
#include <stdio.h>

void mini_printf(const char *format, ...)
{
 va_list args; // Declare a va_list variable to manage the variable arguments

 // Initialize the va_list 'args' to start at the argument after 'format'
 va_start(args, format);
 
 while (*format) // Loop through the format string
 {
  // If a format specifier is encountered
  if (*format == '%')
  {
   format++;
   if (*format == 'd')
   {
    // Fetch the next argument as an integer and print it
    printf("%d", va_arg(args, int));
   }
   else if (*format == 's')
   {
    // Fetch the next argument as a string and print it
    printf("%s", va_arg(args, char *));
   }
  }
  else
  {
   // Print regular characters
   putchar(*format);
  }
  format++; // Move to the next character
 }
 // Cleanup the va_list 'args' after processing
 va_end(args);
}

int main(void)
{
 mini_printf("Hello %s, number is %d\n", "World", 42);
 return (0);
}

/* this function will take the number of values to average
   followed by all of the numbers to average */
// double average ( int num, ... )
// {
//     va_list arguments;                     
//     double sum = 0;
 
//     /* Initializing arguments to store all values after num */
//     va_start ( arguments, num );           
//     /* Sum all the inputs; we still rely on the function caller to tell us how
//      * many there are */
//     for ( int x = 0; x < num; x++ )        
//     {
//         sum += va_arg ( arguments, double ); 
//     }
//     va_end ( arguments );                  // Cleans up the list
 
//     return sum;                      
// }
 
// int main()
// {
//     /* this computes the average of 13.2, 22.3 and 4.5 (3 indicates the number of values to average) */
//     printf( "%f\n", average ( 3, 12.2, 22.3, 4.5 ) );
//     /* here it computes the average of the 5 values 3.3, 2.2, 1.1, 5.5 and 3.3 */
//     printf( "%f\n", average ( 5, 3.3, 2.2, 1.1, 5.5, 3.3 ) );
// }