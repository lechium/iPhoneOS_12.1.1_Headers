/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSMapTable, NSLock, NSString;

@interface PHSafeNSCacheDelegateReflector : NSObject <NSCacheDelegate> {

	NSMapTable* _delegegatesByCache;
	NSLock* _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setDelegate:(id)arg1 forCache:(id)arg2 ;
+(void)removeDelegateForCache:(id)arg1 ;
+(id)sharedInstance;
-(void)setDelegate:(id)arg1 forCache:(id)arg2 ;
-(void)removeDelegateForCache:(id)arg1 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(id)init;
@end

