//
//  log.h
//  logs
//
//  Created by Rami Adel on 19.03.22.
//  Copyright © 2022 Rami Adel. All rights reserved.
//

#ifndef log_h
#define log_h

void log_init(const char * channel , const char * filename);
void log_print(const char * formatString , ...);

#endif /* log_h */
