//
//  test_suit.h
//  logs
//
//  Created by Rami Adel on 19.03.22.
//  Copyright © 2022 Rami Adel. All rights reserved.
//

#ifndef test_suit_h
#define test_suit_h

#include <stdio.h>

void test_char (const char * specifier_field, char ch);
void test_signed_short_int (const char * specifier_field,signed short int val);
void test_signed_int (const char * specifier_field,signed int val);
void test_signed_long_int (const char * specifier_field,signed long int val);
void test_signed_long_long_int (const char * specifier_field,signed long long int val);
void test_unsigned_short_int (const char * specifier_field,unsigned short int val);
void test_unsigned_int (const char * specifier_field,unsigned int val);
void test_unsigned_long_int (const char * specifier_field,unsigned long int val);
void test_unsigned_long_long_int (const char * specifier_field,unsigned long long int val);
void test_double (const char * specifier_field,double val);
void test_long_double (const char * specifier_field,long double d);
void test_pointer (const char * specifier_field, void * ptr);
void test_lowercase_hex(const char * specifier_field,int val);
void test_string (char * str);

#endif /* test_suit_h */
