//
//  test_suit.c
//  logs
//
//  Created by Rami Adel on 19.03.22.
//  Copyright © 2022 Rami Adel. All rights reserved.
//

#include "test_suit.h"
#include "log.h"


void test_char (const char * specifier_field, char ch){
    log_print(specifier_field,ch);
    printf("%c\n",ch);
}

void test_signed_short_int (const char * specifier_field,signed short int val){
    log_print(specifier_field,val);
    printf("%hi\n",val);
}

void test_signed_int (const char * specifier_field,signed int val){
    log_print(specifier_field,val);
    printf("%i\n",val);
}

void test_signed_long_int (const char * specifier_field,signed long int val){
    log_print(specifier_field,val);
    printf("%ld\n",val);
}

void test_signed_long_long_int (const char * specifier_field,signed long long int val){
    log_print(specifier_field,val);
    printf("%lli\n",val);
}


void test_unsigned_short_int (const char * specifier_field,unsigned short int val){
    log_print(specifier_field,val);
    printf("%uh\n",val);
}

void test_unsigned_int (const char * specifier_field,unsigned int val){
    log_print(specifier_field,val);
    printf("%ui\n",val);
}

void test_unsigned_long_int (const char * specifier_field,unsigned long int val){
    log_print(specifier_field,val);
    printf("%lu\n",val);
}

void test_unsigned_long_long_int (const char * specifier_field,unsigned long long int val){
    log_print(specifier_field,val);
    printf("%llu\n",val);
}

void test_double (const char * specifier_field, double val){
    log_print(specifier_field,val);
    printf("%f\n",val);
}

void test_long_double (const char * specifier_field,long double d){
    log_print(specifier_field,d);
    printf("%Lf\n",d);
}

void test_pointer (const char * specifier_field,void* ptr){
    log_print(specifier_field,(int*)ptr);
    printf("%p\n",(int*)ptr);
}


void test_string (char * str){
    log_print(str);
    printf("%s\n",str);
}
    

