/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CUTPromise;

@interface CUTPromiseSeal : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	CUTPromise* _promise;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CUTPromise * promise;                            //@synthesize promise=_promise - In the implementation block
-(void)setPromise:(CUTPromise *)arg1 ;
-(void)fulfillWithValue:(id)arg1 ;
-(CUTPromise *)promise;
-(void)failWithError:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

