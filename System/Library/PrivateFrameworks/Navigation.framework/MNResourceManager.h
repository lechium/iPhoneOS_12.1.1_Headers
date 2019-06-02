/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CLInUseAssertion, BKSProcessAssertion;

@interface MNResourceManager : NSObject {

	unsigned long long _currentPolicy;
	NSString* _reason;
	CLInUseAssertion* _locationAssertion;
	BKSProcessAssertion* _processAssertion;

}

@property (nonatomic,readonly) unsigned long long currentPolicy; 
@property (nonatomic,readonly) NSString * reasonDescription; 
-(NSString *)reasonDescription;
-(void)_clearLocationAssertion;
-(void)_clearProcessAssertion;
-(void)_createLocationAssertion;
-(unsigned)_processAssertionFlagsForResourcePolicy:(unsigned long long)arg1 ;
-(void)_createProcessAssertionWithFlags:(unsigned)arg1 ;
-(void)setResourcePolicy:(unsigned long long)arg1 reason:(id)arg2 ;
-(unsigned long long)currentPolicy;
-(id)init;
-(void)dealloc;
@end

