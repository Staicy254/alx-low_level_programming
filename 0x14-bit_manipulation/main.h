#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *w);
void print_binary(unsigned long int h);
int get_bit(unsigned long int h, unsigned int index);
int set_bit(unsigned long int *h, unsigned int index);
int clear_bit(unsigned long int *h, unsigned int index);
unsigned int flip_bits(unsigned long int h, unsigned long int m);
int _atoi(const char *g);
int _putchar(char c);
int get_endianness(void);

#endif

