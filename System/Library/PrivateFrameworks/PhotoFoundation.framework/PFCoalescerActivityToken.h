/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSObject, NSString, NSArray, NSDate;

@interface PFCoalescerActivityToken : NSObject {

	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSString* _reason;
	NSArray* _callStackReturnAddresses;
	NSDate* _creationDate;

}

@property (retain) NSObject*<OS_dispatch_group> group;                       //@synthesize group=_group - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> isolationQueue;              //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (retain) NSString * reason;                                        //@synthesize reason=_reason - In the implementation block
@property (retain) NSArray * callStackReturnAddresses;                       //@synthesize callStackReturnAddresses=_callStackReturnAddresses - In the implementation block
@property (retain) NSDate * creationDate;                                    //@synthesize creationDate=_creationDate - In the implementation block
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(void)endActivity;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithDispatchGroup:(id)arg1 reason:(id)arg2 ;
-(void)setCallStackReturnAddresses:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSArray *)callStackReturnAddresses;
-(NSString *)reason;
-(NSObject*<OS_dispatch_group>)group;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

