/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKPaymentCredentialMetadata : NSObject {

	NSString* _localizedDisplayName;
	NSString* _value;

}

@property (nonatomic,copy,readonly) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                             //@synthesize value=_value - In the implementation block
+(id)paymentCredentialMetadataWithConfiguration:(id)arg1 ;
+(Class)classForValueType:(id)arg1 ;
-(NSString *)localizedDisplayName;
-(NSString *)value;
-(id)initWithConfiguration:(id)arg1 ;
-(id)displayString;
@end

