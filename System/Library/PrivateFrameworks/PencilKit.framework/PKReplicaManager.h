/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSMutableDictionary, NSMutableArray, NSArray;

@interface PKReplicaManager : NSObject {

	NSObject*<OS_dispatch_queue> _uuidAccessQueue;
	NSMutableOrderedSet* _replicaUUIDs;
	NSMutableDictionary* _replicaEntries;
	NSMutableArray* _replicaManagerErrors;
	BOOL _testMode;

}

@property (assign,nonatomic) BOOL testMode;                                 //@synthesize testMode=_testMode - In the implementation block
@property (nonatomic,readonly) NSArray * replicaManagerErrors; 
+(id)sharedReplicaManager;
-(id)checkoutReplicaUUIDForDrawing:(id)arg1 ;
-(void)returnReplicaForDrawing:(id)arg1 ;
-(void)updateVersionForDrawing:(id)arg1 persist:(BOOL)arg2 ;
-(void)_saveState;
-(BOOL)testMode;
-(void)setTestMode:(BOOL)arg1 ;
-(NSArray *)replicaManagerErrors;
-(void)resetAllReplicaUUIDs;
-(void)_loadState;
-(id)init;
-(void)dealloc;
-(id)description;
@end

