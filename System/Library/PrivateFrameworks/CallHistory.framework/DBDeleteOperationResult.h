/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DBDeleteOperationResult : NSObject {

	BOOL _didSucceed;
	unsigned long long _count;

}

@property (assign) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (assign) BOOL didSucceed;                       //@synthesize didSucceed=_didSucceed - In the implementation block
-(id)initWithCount:(unsigned long long)arg1 andDidSucceed:(BOOL)arg2 ;
-(BOOL)didSucceed;
-(void)setDidSucceed:(BOOL)arg1 ;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
@end

