/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKActivityEvent.h>

@class PKPaymentTransaction;

@interface PKActivityEventTransaction : PKActivityEvent {

	PKPaymentTransaction* _transaction;

}

@property (nonatomic,readonly) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(PKPaymentTransaction *)transaction;
-(id)initWithTransaction:(id)arg1 unread:(BOOL)arg2 ;
-(BOOL)isEqualToActivityEvent:(id)arg1 ;
-(unsigned long long)hash;
-(id)eventType;
@end

