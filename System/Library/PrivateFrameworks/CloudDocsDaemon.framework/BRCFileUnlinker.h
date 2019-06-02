/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface BRCFileUnlinker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _cachePurgeSource;
	NSString* _unlinkRootPath;

}
+(id)fileUnlinker;
-(BOOL)renameAndUnlinkInBackgroundItemAtPath:(id)arg1 ;
-(BOOL)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2 ;
-(void)forcePurgeWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_purge;
-(id)init;
-(void)resume;
@end

