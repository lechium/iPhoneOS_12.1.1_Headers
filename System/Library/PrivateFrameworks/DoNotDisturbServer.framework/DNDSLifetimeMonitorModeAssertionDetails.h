/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DNDModeAssertion, DNDModeAssertionLifetime;

@interface DNDSLifetimeMonitorModeAssertionDetails : NSObject {

	DNDModeAssertion* _modeAssertion;
	DNDModeAssertionLifetime* _effectiveLifetime;

}

@property (nonatomic,copy,readonly) DNDModeAssertion * modeAssertion;                          //@synthesize modeAssertion=_modeAssertion - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertionLifetime * effectiveLifetime;              //@synthesize effectiveLifetime=_effectiveLifetime - In the implementation block
-(id)initWithModeAssertion:(id)arg1 effectiveLifetime:(id)arg2 ;
-(DNDModeAssertion *)modeAssertion;
-(DNDModeAssertionLifetime *)effectiveLifetime;
@end
