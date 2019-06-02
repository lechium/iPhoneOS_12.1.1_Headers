/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYStoreSessionOwner.h>

@class NSArray;

@interface SYStoreDeltaSessionOwner : SYStoreSessionOwner {

	NSArray* _changes;
	unsigned long long _currentIdx;

}

@property (nonatomic,readonly) unsigned long long changeCount; 
-(id)initWithChanges:(id)arg1 ;
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(unsigned long long)changeCount;
@end
