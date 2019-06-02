/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFMutexLock;

@interface FCOnce : NSObject {

	BOOL _finished;
	NFMutexLock* _lock;

}

@property (assign,nonatomic) BOOL finished;                   //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NFMutexLock * lock;              //@synthesize lock=_lock - In the implementation block
-(BOOL)finished;
-(void)setFinished:(BOOL)arg1 ;
-(void)executeOnce:(/*^block*/id)arg1 ;
-(BOOL)hasBeenTriggered;
-(void)setLock:(NFMutexLock *)arg1 ;
-(id)init;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(NFMutexLock *)lock;
-(BOOL)trigger;
@end

