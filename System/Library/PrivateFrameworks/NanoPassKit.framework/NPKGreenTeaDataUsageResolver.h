/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NPKGreenTeaDataUsageResolver : NSObject {

	BOOL _currentlyResolving;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) BOOL currentlyResolving;                                 //@synthesize currentlyResolving=_currentlyResolving - In the implementation block
+(void)resolveGreenTeaDataUsageIfNecessary;
-(void)resolveGreenTeaDataUsageIfNecessary;
-(void)_resolveGreenTeaDataUsageIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)currentlyResolving;
-(void)setCurrentlyResolving:(BOOL)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id)init;
@end

