//
//  log.c
//  logs
//
//  Created by Rami Adel on 19.03.22.
//  Copyright © 2022 Rami Adel. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "log-cfg.h"

void log_init(int channel , char * filename){
    //there is sth missing here  ..
    if(channel == CHANNEL_FILE)
    {
        freopen(CHANNEL_FILE_FILE_NAME,"w",stdout);
    }
    else
    {
        
    }
}

void log_print(const char * formatString , ...)
{
    va_list arguments;
    va_start(arguments,formatString);
    
    int formatString_Index  = 0 ;
    int formatString_Length = (int)strlen(formatString);
    
    int specifier_field_Index = 0 ;
    char specifier_field [formatString_Length] ;
    
    int flag = 0;
    
    while(formatString_Index < formatString_Length )
    {
        specifier_field_Index = 0 ;
        memset(specifier_field , 0 , 100);
        
        if(formatString[formatString_Index]=='%')
        {
            formatString_Index++;
            
            specifier_field[specifier_field_Index]='%';
           
            specifier_field_Index++;
            
            if(formatString[formatString_Index]=='%')
            {
                specifier_field[specifier_field_Index++]='%';
            }
            
            while(formatString[formatString_Index]!='%' && formatString_Index < formatString_Length)
            {
                specifier_field[specifier_field_Index]=formatString[formatString_Index];
                specifier_field_Index++;
                formatString_Index++;
                
            }
        }
        else if(formatString[formatString_Index]!='%')
        {
            int i = 0;
            while(formatString[formatString_Index]!='%'&&formatString_Index<formatString_Length){
                specifier_field[i]=formatString[formatString_Index];
                i++;
                formatString_Index++;
            }
            printf("%s",specifier_field);
            flag=1;
        }
        if(flag){
            flag=0;
            continue;
        }
        int i = 1;
        //printf("%s",specifier_field);
        while(specifier_field[i]!='\0'){
  
            //char
            if(specifier_field[i]=='c'&&specifier_field[i-1]=='%'){
                char temp = (char)va_arg(arguments,int);
                printf(specifier_field,temp);
                break;
            }
            
            //short signed integer
            else if((specifier_field[i]=='d'||specifier_field[i]=='i')&&(specifier_field[i-1]=='h')){
                signed short int temp = (signed short int)va_arg(arguments,int);
                printf(specifier_field,temp);
                break;
            }
            
            //signed int
            else if((specifier_field[i]=='d'||specifier_field[i]=='i')&&specifier_field[i-1]=='%'){
                signed int  temp = va_arg(arguments,int);
                printf(specifier_field,temp);
                break;
            }
            
            //long signed integer
            else if((specifier_field[i+1]=='d'||specifier_field[i+1]=='i')&&(specifier_field[i]=='l')){
                signed long int temp = (signed long int)va_arg(arguments, long int);
                printf(specifier_field,temp);
                break;
            }
            
            //long long signed int
            else if((specifier_field[i+2]=='d'||specifier_field[i+2]=='i')&&(specifier_field[i]=='l'&&specifier_field[i-1]=='l')){
                 signed long long int temp = (signed long long int)va_arg(arguments,long long int);
                 printf(specifier_field,temp);
                 break;
             }
            
            //unsigned short int
            else if(specifier_field[i]=='u'&&(specifier_field[i-1]=='%'||specifier_field[i-1]=='h')){
                unsigned short int temp = (unsigned short int) va_arg(arguments,int);
                printf(specifier_field,temp);
                break;
            }
            
            //unsigned int
            else if(specifier_field[i]=='u'&&specifier_field[i-1]=='%'){
                unsigned int temp = va_arg(arguments,int);
                printf(specifier_field,temp);
                break;
            }
            
            //unsigned long int
            else if(specifier_field[i]=='u'&&specifier_field[i-1]=='l'){
                unsigned long int  temp = (unsigned long int)va_arg(arguments,long int);
                printf(specifier_field,temp);
                break;
            }
            //unsigned long long int
            else if(specifier_field[i]=='u'&&specifier_field[i-1]=='l'&&specifier_field[i-2]=='l'){
                unsigned long int  temp = (unsigned long int)va_arg(arguments,long int);
                printf(specifier_field,temp);
                break;
            }
            
            //double
            else if(specifier_field[i]=='f'&&(specifier_field[i-1]=='%')){
                double temp = va_arg(arguments,double);
                printf(specifier_field,temp);
                break;
            }
            
            //long double
            else if(specifier_field[i]=='f'&&(specifier_field[i-1]=='L'&&specifier_field[i-2]=='%')){
                long double temp = (long double)va_arg(arguments,double);
                printf(specifier_field,temp);
                break;
            }
            
            //string
            else if(specifier_field[i]=='s'&&(specifier_field[i-1]=='%')){
                char* temp = (char *)va_arg(arguments,char*);
                printf(specifier_field,temp);
                break;
            }
            
            //pointer
            else if(specifier_field[i]=='p'){
                void *temp = va_arg(arguments,void*);
                printf(specifier_field,temp);
                break;
            }
            
            //lowercase hex
            else if(specifier_field[i]=='x'){
                int temp = va_arg(arguments,int);
                printf(specifier_field,temp);
                break;
            }
            
            //uppercase hex
            else if(specifier_field[i]=='X'){
                int temp = va_arg(arguments,int);
                printf(specifier_field,temp);
                break;
            }
            
            //lowercase oct
            else if(specifier_field[i]=='o'){
                int temp = va_arg(arguments,int);
                printf(specifier_field,temp);
                break;
            }
            
            //uppercase oct
            else if(specifier_field[i]=='O'){
                int temp = va_arg(arguments,int);
                printf(specifier_field,temp);
                break;
            }
            
            //percentage sign
            else if(specifier_field[i]=='%'){
                printf(specifier_field,'%');
                break;
            }
            
            //new line
            else if(specifier_field[i]=='\n'){
                printf("\n");
                break;
            }

            i++;
        }
     
    }
    va_end(arguments);
}
