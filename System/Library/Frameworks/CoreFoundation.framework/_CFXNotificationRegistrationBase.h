/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class _CFXNotificationRegistrationContainer, _CFXNotificationRegistrar;

@interface _CFXNotificationRegistrationBase : NSObject {

	_CFXNotificationRegistrationContainer* _parent;
	os_lock_handoff_s* _lock;

}

@property (__weak,readonly) _CFXNotificationRegistrationContainer * parent; 
@property (readonly) _CFXNotificationRegistrar * registrar; 
@property (readonly) void* key; 
+(const SCD_Struct_CF2*)keyCallbacks;
-(_CFXNotificationRegistrar *)registrar;
-(void)setParent:(_CFXNotificationRegistrationContainer *)arg1 ;
-(void)removeFromParent;
-(id)initWithParent:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void*)key;
-(_CFXNotificationRegistrationContainer *)parent;
@end

