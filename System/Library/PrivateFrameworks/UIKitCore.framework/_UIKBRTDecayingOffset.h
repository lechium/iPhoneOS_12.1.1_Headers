/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIKBRTDecayingObject.h>

@interface _UIKBRTDecayingOffset : _UIKBRTDecayingObject {

	BOOL _limitMovement;
	CGPoint _offset;

}

@property (nonatomic,readonly) CGPoint offset; 
@property (nonatomic,readonly) CGPoint originalOffset; 
-(void)reset;
-(CGPoint)offset;
-(id)initWithTimeoutDuration:(double)arg1 limitMovement:(BOOL)arg2 ;
-(void)updateOffsetTo:(CGPoint)arg1 ;
-(CGPoint)originalOffset;
@end

