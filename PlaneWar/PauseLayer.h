//
//  PauseLayer.h
//  PlaneWar
//
//  Created by Cool on 13-8-21.
//  Copyright (c) 2013年 GetToSet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "AppDelegate.h"

@class PauseLayer;

@protocol PauseLayerProtocol <NSObject>

@required
-(void) didRecieveResumeEvent:(PauseLayer*)layer;
-(void) didRecieveRestartEvent:(PauseLayer*)layer;

@end

@interface PauseLayer : CCLayerColor<CCTouchOneByOneDelegate> {
    id<PauseLayerProtocol> delegate;
}
@property(nonatomic,assign)id<PauseLayerProtocol> delegate;

@end

@interface CustomMenu : CCMenu{
    
}

@end
