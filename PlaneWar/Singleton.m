//
//  Singleton.m
//  PlaneWar
//
//  Created by renchunyu on 13-8-28.
//  Copyright (c) 2013年 GetToSet. All rights reserved.
//


#import "Singleton.h"

@implementation Singleton

static Singleton *_sharedInstance = nil;

- (void) operation
{
    // do something
    NSLog(@"Singleton");
}

+ (Singleton *) sharedInstance
{
    if (_sharedInstance == nil)
    {
        _sharedInstance = [NSAllocateObject([self class], 0, NULL) init];
    }
    
    return _sharedInstance;
}

+ (id) allocWithZone:(NSZone *)zone
{
    return [[self sharedInstance] retain];
}

- (id) copyWithZone:(NSZone*)zone
{
    return self;
}

- (id) retain
{
    return self;
}

- (NSUInteger) retainCount
{
    return NSUIntegerMax; // denotes an object that cannot be released
}


- (oneway void) release
{
    // do nothing
}

- (id) autorelease
{
    return self;
}

@end