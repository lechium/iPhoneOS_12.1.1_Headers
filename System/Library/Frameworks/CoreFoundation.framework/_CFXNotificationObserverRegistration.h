/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

@interface _CFXNotificationObserverRegistration : _CFXNotificationRegistrationContainer {

	void* _observer;

}

@property (readonly) void* observer;              //@synthesize observer=_observer - In the implementation block
+(Class)childClass;
-(id)initWithObserver:(void*)arg1 parent:(id)arg2 ;
-(void)resetObserverAndChildren:(void*)arg1 ;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
-(void)match:(SCD_Struct_CF10*)arg1 ;
-(void)find:(SCD_Struct_CF10*)arg1 ;
-(void*)observer;
-(void*)key;
@end

