/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SKProductSubscriptionPeriod : NSObject {

	id _internal;

}

@property (nonatomic,readonly) unsigned long long numberOfUnits; 
@property (nonatomic,readonly) unsigned long long unit; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithISO8601String:(id)arg1 ;
-(unsigned long long)numberOfUnits;
-(void)_setNumberOfUnits:(unsigned long long)arg1 ;
-(void)_setUnit:(unsigned long long)arg1 ;
-(unsigned long long)unit;
-(id)init;
@end

