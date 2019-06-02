/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIDruidSourceWarmUpConnection, CAContext, NSMutableArray, NSArray, UIScreen;

@interface _UIDragManager : NSObject {

	_UIDruidSourceWarmUpConnection* _warmUpConnection;
	CAContext* _dragImageContext;
	long long _pendingSessionRequests;
	NSMutableArray* _pendingSessionRequestsCompletionBlocks;
	NSArray* _dragSessionSources;
	NSArray* _dragSessionDestinations;
	UIScreen* _screen;

}

@property (nonatomic,__weak,readonly) UIScreen * screen;                   //@synthesize screen=_screen - In the implementation block
@property (nonatomic,copy) NSArray * dragSessionSources;                   //@synthesize dragSessionSources=_dragSessionSources - In the implementation block
@property (nonatomic,copy) NSArray * dragSessionDestinations;              //@synthesize dragSessionDestinations=_dragSessionDestinations - In the implementation block
@property (nonatomic,readonly) CAContext * dragImageContext; 
-(UIScreen *)screen;
-(id)initWithScreen:(id)arg1 ;
-(void)warmUpDruid;
-(NSArray *)dragSessionSources;
-(id)beginDragWithItems:(id)arg1 dataOwner:(long long)arg2 touches:(id)arg3 orInitialCentroid:(CGPoint)arg4 requiredContextIds:(id)arg5 shouldPerformHitTesting:(BOOL)arg6 sourceView:(id)arg7 accessibilityEndpoint:(id)arg8 ;
-(void)_willAddDeactivationReason:(id)arg1 ;
-(CAContext *)dragImageContext;
-(void)setDragSessionSources:(NSArray *)arg1 ;
-(void)performPendingSessionCompletionBlocksIfPossible;
-(BOOL)hasPendingSessionRequests;
-(NSArray *)dragSessionDestinations;
-(void)setDragSessionDestinations:(NSArray *)arg1 ;
-(unsigned)uploadImage:(CGImageRef)arg1 ;
-(void)deleteSlots:(id)arg1 ;
-(void)performAfterCompletingPendingSessionRequests:(/*^block*/id)arg1 ;
-(void)sessionSourceDidEnd:(id)arg1 ;
-(id)sessionSourceWithIdentifier:(unsigned)arg1 ;
-(id)dragDestinationWithEvent:(id)arg1 ;
-(void)sessionDestinationDidEnd:(id)arg1 ;
@end

