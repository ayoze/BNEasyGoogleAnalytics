//
//  OCMockito - MKTLongLongReturnSetter.h
//  Copyright 2014 Jonathan M. Reid. See LICENSE.txt
//
//  Created by: Jon Reid, http://qualitycoding.org/
//  Source: https://github.com/jonreid/OCMockito
//

#import "MKTReturnValueSetter.h"


@interface MKTLongLongReturnSetter : MKTReturnValueSetter

- (instancetype)initWithSuccessor:(MKTReturnValueSetter *)successor;

@end
