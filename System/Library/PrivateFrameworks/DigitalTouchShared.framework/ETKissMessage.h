/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchShared/DigitalTouchShared-Structs.h>
#import <DigitalTouchShared/ETMessage.h>

@class SKTexture, SKUniform, NSMutableArray, NSMutableSet, KissNode;

@interface ETKissMessage : ETMessage {

	SKTexture* _atlas;
	SKUniform* _atlasUniform;
	NSMutableArray* _points;
	NSMutableArray* _angles;
	NSMutableArray* _delays;
	NSMutableSet* _kissMarkNodes;
	double _lastKissTime;
	KissNode* _lastKiss;
	BOOL _didDelegateWillStopPlaying;
	BOOL _didDelegateDidStopPlaying;

}
+(unsigned short)messageType;
+(id)_kissColor;
-(void)stopPlaying;
-(id)initWithArchiveData:(id)arg1 ;
-(void)setParentMessage:(id)arg1 ;
-(id)messageTypeAsString;
-(double)messageDuration;
-(void)displayInScene:(id)arg1 ;
-(BOOL)reachedSizeLimit;
-(void)addKissAtNormalizedPoint:(CGPoint)arg1 angle:(double)arg2 time:(double)arg3 toScene:(id)arg4 ;
-(void)_initAtlas;
-(BOOL)_leaveMarkAtDelay:(double)arg1 ;
-(void)_displayKissAtPoint:(CGPoint)arg1 angle:(double)arg2 leavesMark:(BOOL)arg3 inScene:(id)arg4 ;
-(BOOL)_hasKissesThatLeaveMark;
-(void)_notifyDelegateWillStopPlaying;
-(void)_notifyDelegateDidStopPlaying;
-(void)_setKissLeavesMark:(id)arg1 ;
-(id)init;
-(id)archiveData;
@end

