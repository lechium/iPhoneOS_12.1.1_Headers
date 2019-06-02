/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HMDAccessoryRetrievalCompletionTuple : HMFObject {

	long long _linkType;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completion;

}

@property (assign,nonatomic) long long linkType;                              //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id completion;                                     //@synthesize completion=_completion - In the implementation block
+(id)tupleWithLinkType:(long long)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setLinkType:(long long)arg1 ;
-(long long)linkType;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

