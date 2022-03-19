//
//  main.c
//  logs
//
//  Created by Rami Adel on 18.03.22.
//  Copyright © 2022 Rami Adel. All rights reserved.
//

#include "log-cfg.h"
#include "log.h"
#include "test_suit.h"
#include <limits.h>
#include <float.h>


int main() {
    
    
    test_char("%c\n",'c');
    
    test_signed_short_int("%hi\n",SHRT_MAX);
    test_signed_short_int("%hd\n",SHRT_MIN);
    
    test_signed_int("%i\n",INT_MAX);
    test_signed_int("%d\n",INT_MIN);
    
    test_signed_long_int ("%li\n",LONG_MAX );
    test_signed_long_int ("%ld\n",LONG_MIN );
    
    test_signed_long_long_int ("%lld\n",LONG_LONG_MAX );
    test_signed_long_long_int ("%lld\n",LONG_LONG_MIN );
    
    /*
     ...
     unsigned test cases
     ...
     */
    
    test_double("%f\n",DBL_MAX);
    test_double("%f\n",DBL_MIN);
    
    
    /*
     ...
     long double
     ...
     ...
     */
    
    
   
    /*
        ANOTHER Test Cases
     */
    log_print("%hi %hu hi  %c %f\n%%\n\n\n%x\n%o\n%X",10 ,20,'a',12.5,0xFF,10,10);
    log_print("%%\n%%\n%c\n%hi hhihihucf",97,100);
    log_print("%hi %hu hi hu f %% ",10 ,20);
    
    return 0;
}
