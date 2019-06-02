/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>

@class NSString;

@interface NUOnboardingVersionProvider : NSObject <NUAdContextProvider> {

	long long _onboardingVersion;

}

@property (nonatomic,readonly) long long onboardingVersion;              //@synthesize onboardingVersion=_onboardingVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)onboardingVersion;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(id)initWithOnboardingVersion:(long long)arg1 ;
@end

