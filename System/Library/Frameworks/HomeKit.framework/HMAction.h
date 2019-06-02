/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMObjectMerge.h>

@class HMFUnfairLock, NSUUID, HMActionSet, _HMContext, NSString;

@interface HMAction : NSObject <HMObjectMerge> {

	HMFUnfairLock* _lock;
	NSUUID* _uniqueIdentifier;
	NSUUID* _uuid;
	HMActionSet* _actionSet;
	unsigned long long _actionType;
	_HMContext* _context;

}

@property (assign,nonatomic) unsigned long long actionType;                 //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) _HMContext * context;                          //@synthesize context=_context - In the implementation block
@property (copy) NSUUID * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (__weak) HMActionSet * actionSet;                                 //@synthesize actionSet=_actionSet - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_lookupActionWithInfo:(id)arg1 inArray:(id)arg2 ;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
-(unsigned long long)actionType;
-(void)setActionType:(unsigned long long)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 actionSet:(id)arg2 ;
-(BOOL)_handleUpdates:(id)arg1 ;
-(void)setActionSet:(HMActionSet *)arg1 ;
-(id)_serializeForAdd;
-(HMActionSet *)actionSet;
-(id)init;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(void)setContext:(_HMContext *)arg1 ;
-(_HMContext *)context;
-(void)_invalidate;
-(NSUUID *)uniqueIdentifier;
@end

