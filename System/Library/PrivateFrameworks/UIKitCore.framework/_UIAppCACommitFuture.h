/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIAppCACommitFuture : NSObject {

	/*^block*/id _block;
	BOOL _invalidated;
	BOOL _finished;

}

@property (getter=_isInvalidated,nonatomic,readonly) BOOL invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
@property (getter=_isFinished,nonatomic,readonly) BOOL finished;                    //@synthesize finished=_finished - In the implementation block
+(id)scheduledPostCommitFuture:(/*^block*/id)arg1 ;
+(id)scheduledPreCommitFuture:(/*^block*/id)arg1 ;
-(void)invalidate;
-(id)initWithPhase:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)_invoke;
-(BOOL)_isInvalidated;
-(BOOL)_isFinished;
@end

