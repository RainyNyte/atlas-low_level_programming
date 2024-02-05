#include "main.h"

/**
 *print_triangle- prints a triangle of a given size using #
 *@l: the size of the triangle to print in characters
 *
 *Return:void
 */

void print_triangle(int l)
{
    int height;
    int length;

    if (l > 0)
    {
        for (height = 1; height <= l; height++)
        {
            for (length = 1; length <= l; length++)
            {
                if (length == l)
                {
                  _putchar('#');
                }
                else
                {
                  if (height == l)
                  {
                    _putchar('#');
                  }
                  else
                  {
                    _putchar(' ');
                  }
                }
            }
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}
