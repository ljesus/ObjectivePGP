//
//  NSMutableData+PGP.h
//  ObjectivePGP
//
//  Created by Marcin Krzyzanowski on 17/02/15.
//  Copyright (c) 2015 Marcin Krzyżanowski. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableData (PGP)

- (void) appendUInt8:(UInt8)value;
- (void) appendUInt16BE:(UInt16)value;
- (void) appendUInt32BE:(UInt32)value;

@end