/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSCountedSet, BKSApplicationStateMonitor;

@interface SFProcessDictionary : NSObject {

	NSMutableDictionary* _pidToBundleIdentifierMap;
	NSMutableSet* _pidsPendingTermination;
	NSMutableArray* _recentlyReferencedPIDs;
	NSCountedSet* _references;
	BKSApplicationStateMonitor* _stateMonitor;
	NSMutableDictionary* _values;
	unsigned long long _cacheCapacity;

}

@property (nonatomic,readonly) unsigned long long cacheCapacity;              //@synthesize cacheCapacity=_cacheCapacity - In the implementation block
-(void)decrementReferenceForPID:(int)arg1 ;
-(id)incrementReferenceForPID:(int)arg1 bundleIdentifier:(id)arg2 valueCreationBlock:(/*^block*/id)arg3 ;
-(id)initWithCacheCapacity:(unsigned long long)arg1 ;
-(void)_handleApplicationStateUpdate:(id)arg1 ;
-(void)_handleProcessTermination:(int)arg1 ;
-(void)_removeValueForPID:(id)arg1 ;
-(void)_updateInterestedApplications;
-(void)_removeUnreferencedObjectsIfNeeded;
-(unsigned long long)cacheCapacity;
-(id)init;
-(void)dealloc;
@end

