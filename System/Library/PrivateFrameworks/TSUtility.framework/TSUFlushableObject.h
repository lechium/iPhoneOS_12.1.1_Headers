/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUFlushable.h>

@protocol NSLocking;
@class TSUFlushingManager, NSObject, NSString;

@interface TSUFlushableObject : NSObject <TSUFlushable> {

	int _retainCount;
	int _ownerCount;
	TSUFlushingManager* _flushingManager;
	NSObject*<NSLocking> _flushingManagerIvarLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)unload;
-(id)ownerAutoreleasedAccess;
-(BOOL)hasFlushableContent;
-(void)addOwner;
-(void)ownerWillAccess;
-(void)ownerDidAccess;
-(id)ownerRetain;
-(void)ownerRelease;
-(id)init;
-(void)dealloc;
-(oneway void)release;
-(id)retain;
-(unsigned long long)retainCount;
-(void)flush;
@end

