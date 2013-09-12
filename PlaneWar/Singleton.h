//
//  Singleton.h
//  PlaneWar
//
//  Created by renchunyu on 13-8-28.
//  Copyright (c) 2013年 GetToSet. All rights reserved.
//



#import <Foundation/Foundation.h>

@interface Singleton : NSObject
{
    //for game pause 全局变量
    BOOL _isGamePause;

}

+ (Singleton *) sharedInstance;

- (void) operation;

@end