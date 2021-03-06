/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIEvent.h>

@class NSMutableSet;

@interface UIPencilEvent : UIEvent {

	NSMutableSet* _trackedInteractions;

}

@property (nonatomic,retain) NSMutableSet * trackedInteractions;              //@synthesize trackedInteractions=_trackedInteractions - In the implementation block
-(NSMutableSet *)trackedInteractions;
-(id)_init;
-(id)collectAllActiveInteractions;
-(void)_sendEventToInteractions;
-(void)registerInteraction:(id)arg1 ;
-(void)deregisterInteraction:(id)arg1 ;
-(void)setTrackedInteractions:(NSMutableSet *)arg1 ;
@end

