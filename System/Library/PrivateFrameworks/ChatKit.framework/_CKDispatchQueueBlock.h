/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _CKDispatchQueueBlock : NSObject {

	/*^block*/id _block;
	NSString* _key;
	long long _priority;
	unsigned long long _fifo;

}

@property (nonatomic,copy) id block;                                               //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) NSString * key;                                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) long long priority;                                   //@synthesize priority=_priority - In the implementation block
@property (assign,setter=setFIFO:,nonatomic) unsigned long long fifo;              //@synthesize fifo=_fifo - In the implementation block
-(id)initWithBlock:(/*^block*/id)arg1 key:(id)arg2 priority:(long long)arg3 fifo:(unsigned long long)arg4 ;
-(unsigned long long)fifo;
-(void)setFIFO:(unsigned long long)arg1 ;
-(id)description;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(NSString *)key;
-(void)cancel;
-(long long)compare:(id)arg1 ;
-(id)block;
-(void)setKey:(NSString *)arg1 ;
-(void)setBlock:(id)arg1 ;
@end
