/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/STMSizeCache.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface STMSizer : STMSizeCache {

	NSObject*<OS_dispatch_queue> _fsQueue;
	FSEventStreamRef _fsStream;
	BOOL _streamRunning;
	NSArray* _rootPaths;
	NSObject*<OS_dispatch_queue> _updateQueue;

}

@property (retain) NSObject*<OS_dispatch_queue> updateQueue;              //@synthesize updateQueue=_updateQueue - In the implementation block
@property (nonatomic,retain) NSArray * rootPaths;                         //@synthesize rootPaths=_rootPaths - In the implementation block
-(NSObject*<OS_dispatch_queue>)updateQueue;
-(void)setUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithPrefsKey:(id)arg1 ;
-(void)setRootPaths:(NSArray *)arg1 ;
-(void)startSizer;
-(void)stopSizer;
-(void)pathChanged:(id)arg1 flags:(unsigned)arg2 event:(unsigned long long)arg3 ;
-(NSArray *)rootPaths;
-(void)dealloc;
@end
