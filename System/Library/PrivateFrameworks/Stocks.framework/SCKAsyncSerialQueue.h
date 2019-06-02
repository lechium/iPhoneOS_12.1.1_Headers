/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface SCKAsyncSerialQueue : NSObject {

	NSOperationQueue* _serialOperationQueue;

}

@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;              //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
@property (getter=isSuspended) BOOL suspended; 
-(NSOperationQueue *)serialOperationQueue;
-(void)waitUntilEmpty;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
-(id)init;
-(BOOL)isSuspended;
-(void)setSuspended:(BOOL)arg1 ;
@end

