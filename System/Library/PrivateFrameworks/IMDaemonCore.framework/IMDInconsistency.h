/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUTWeakReference, NSDate;

@interface IMDInconsistency : NSObject {

	CUTWeakReference* _contextWeakReference;
	NSDate* _firstOccurrence;
	unsigned long long _count;

}

@property (assign,nonatomic,__weak) id context; 
@property (readonly) NSDate * firstOccurrence;                      //@synthesize firstOccurrence=_firstOccurrence - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(NSDate *)firstOccurrence;
-(BOOL)shouldJettison:(id*)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)setContext:(id)arg1 ;
-(id)context;
-(void)setCount:(unsigned long long)arg1 ;
@end

