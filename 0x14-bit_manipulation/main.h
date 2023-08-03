#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *val_boo);
void print_binary(unsigned long int val_num);
int get_bit(unsigned long int val_num, unsigned int index);
int set_bit(unsigned long int *val_num, unsigned int index);
int clear_bit(unsigned long int *val_num, unsigned int index);
unsigned int flip_bits(unsigned long int val_num, unsigned long int val_mic);
int _atoi(const char *val_sym);
int _putchar(char val_cum);
int get_endianness(void);

#endif
