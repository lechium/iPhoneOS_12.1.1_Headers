/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKManualUpdater.h>

@class NSCountedSet;

@interface CKScheduledUpdater : CKManualUpdater {

	BOOL _updateSynchronouslyIfPossible;
	NSCountedSet* _holdingUpdatesKeys;

}

@property (nonatomic,retain) NSCountedSet * holdingUpdatesKeys;               //@synthesize holdingUpdatesKeys=_holdingUpdatesKeys - In the implementation block
@property (assign,nonatomic) BOOL updateSynchronouslyIfPossible;              //@synthesize updateSynchronouslyIfPossible=_updateSynchronouslyIfPossible - In the implementation block
-(void)updateIfNeeded;
-(void)setUpdateSynchronouslyIfPossible:(BOOL)arg1 ;
-(BOOL)isHoldingUpdates;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingAllUpdatesForKey:(id)arg1 ;
-(void)endHoldingAllUpdates;
-(BOOL)isHoldingUpdatesForKey:(id)arg1 ;
-(NSCountedSet *)holdingUpdatesKeys;
-(void)setHoldingUpdatesKeys:(NSCountedSet *)arg1 ;
-(BOOL)updateSynchronouslyIfPossible;
-(void)dealloc;
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)invalidate;
-(void)setNeedsUpdate;
@end

