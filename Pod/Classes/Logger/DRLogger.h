//
//  DRLogger.h
//  DoradaCore
//
//  Created by Daniel Broad on 03/10/2013.
//  Copyright (c) 2013 Dorada. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DRLogger : NSObject

-(id) initWithIdentifier: (NSString*) identifier isPersistent: (BOOL) persistent;

-(NSString*) logAsString;
-(NSString*) persistantFilePath;

- (void) appendLog:(NSString*)prefix, ... NS_REQUIRES_NIL_TERMINATION;

@end
