/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteConfiguration/RemoteConfiguration-Structs.h>
#import <libobjc.A.dylib/RCLocking.h>

@interface RCMutexLock : NSObject <RCLocking> {

	opaque_pthread_mutex_t _lock;

}
-(void)performWithLockSync:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)lock;
-(void)unlock;
@end
