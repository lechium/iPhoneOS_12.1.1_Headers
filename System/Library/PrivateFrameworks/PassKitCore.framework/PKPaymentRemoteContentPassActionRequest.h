/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	PKPaymentPassAction* _action;

}

@property (nonatomic,retain) PKPaymentPass * pass;                      //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentPassAction * action;              //@synthesize action=_action - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(PKPaymentPassAction *)action;
-(void)setAction:(PKPaymentPassAction *)arg1 ;
@end

