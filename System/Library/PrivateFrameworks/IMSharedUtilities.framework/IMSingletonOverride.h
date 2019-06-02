/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSingletonOverriding.h>

@class NSString;

@interface IMSingletonOverride : NSObject <IMSingletonOverriding> {

	id _overriddenSingleton;

}

@property (__weak) id overriddenSingleton;                          //@synthesize overriddenSingleton=_overriddenSingleton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)overriddenSingleton;
-(void)setOverriddenSingleton:(id)arg1 ;
-(void)didOverrideSingleton:(id)arg1 ;
-(BOOL)shouldInvokeSelector:(SEL)arg1 onSingleton:(id)arg2 ;
@end

