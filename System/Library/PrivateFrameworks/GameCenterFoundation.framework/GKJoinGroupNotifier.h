/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKJoinGroup, NSLock, NSMutableArray, NSError;

@interface GKJoinGroupNotifier : NSObject {

	GKJoinGroup* _group;
	NSLock* _lock;
	NSMutableArray* _updateQueue;
	NSError* _error;

}

@property (assign,nonatomic) GKJoinGroup * group;                       //@synthesize group=_group - In the implementation block
@property (retain) NSLock * lock;                                       //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateQueue;              //@synthesize updateQueue=_updateQueue - In the implementation block
@property (retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
-(NSMutableArray *)updateQueue;
-(void)setUpdateQueue:(NSMutableArray *)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(void)setResult:(/*^block*/id)arg1 error:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(oneway void)release;
-(id)retain;
-(GKJoinGroup *)group;
-(NSLock *)lock;
-(void)setGroup:(GKJoinGroup *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

