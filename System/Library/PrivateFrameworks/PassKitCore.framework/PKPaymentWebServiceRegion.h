/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSURL;

@interface PKPaymentWebServiceRegion : NSObject <NSSecureCoding> {

	BOOL _hasPeerPaymentAccount;
	NSString* _lastUpdatedTag;
	NSArray* _certificates;
	NSURL* _brokerURL;
	NSString* _regionCode;
	NSURL* _paymentServicesURL;
	NSURL* _inAppPaymentServicesURL;
	NSURL* _paymentServicesMerchantURL;
	NSURL* _trustedServiceManagerURL;
	NSString* _trustedServiceManagerPushTopic;
	long long _consistencyCheckBackoffLevel;
	NSString* _userNotificationPushTopic;
	NSURL* _peerPaymentServiceURL;

}

@property (nonatomic,retain) NSString * lastUpdatedTag;                              //@synthesize lastUpdatedTag=_lastUpdatedTag - In the implementation block
@property (nonatomic,retain) NSArray * certificates;                                 //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain) NSURL * brokerURL;                                      //@synthesize brokerURL=_brokerURL - In the implementation block
@property (nonatomic,retain) NSString * regionCode;                                  //@synthesize regionCode=_regionCode - In the implementation block
@property (nonatomic,retain) NSURL * paymentServicesURL;                             //@synthesize paymentServicesURL=_paymentServicesURL - In the implementation block
@property (nonatomic,retain) NSURL * inAppPaymentServicesURL;                        //@synthesize inAppPaymentServicesURL=_inAppPaymentServicesURL - In the implementation block
@property (nonatomic,retain) NSURL * paymentServicesMerchantURL;                     //@synthesize paymentServicesMerchantURL=_paymentServicesMerchantURL - In the implementation block
@property (nonatomic,retain) NSURL * trustedServiceManagerURL;                       //@synthesize trustedServiceManagerURL=_trustedServiceManagerURL - In the implementation block
@property (nonatomic,retain) NSString * trustedServiceManagerPushTopic;              //@synthesize trustedServiceManagerPushTopic=_trustedServiceManagerPushTopic - In the implementation block
@property (assign,nonatomic) long long consistencyCheckBackoffLevel;                 //@synthesize consistencyCheckBackoffLevel=_consistencyCheckBackoffLevel - In the implementation block
@property (nonatomic,retain) NSString * userNotificationPushTopic;                   //@synthesize userNotificationPushTopic=_userNotificationPushTopic - In the implementation block
@property (nonatomic,retain) NSURL * peerPaymentServiceURL;                          //@synthesize peerPaymentServiceURL=_peerPaymentServiceURL - In the implementation block
@property (assign,nonatomic) BOOL hasPeerPaymentAccount;                             //@synthesize hasPeerPaymentAccount=_hasPeerPaymentAccount - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)trustedServiceManagerPushTopic;
-(NSURL *)peerPaymentServiceURL;
-(BOOL)hasPeerPaymentAccount;
-(void)setLastUpdatedTag:(NSString *)arg1 ;
-(void)setConsistencyCheckBackoffLevel:(long long)arg1 ;
-(long long)consistencyCheckBackoffLevel;
-(NSString *)lastUpdatedTag;
-(NSURL *)trustedServiceManagerURL;
-(void)setBrokerURL:(NSURL *)arg1 ;
-(void)setTrustedServiceManagerURL:(NSURL *)arg1 ;
-(void)setTrustedServiceManagerPushTopic:(NSString *)arg1 ;
-(void)setPaymentServicesURL:(NSURL *)arg1 ;
-(void)setInAppPaymentServicesURL:(NSURL *)arg1 ;
-(NSURL *)inAppPaymentServicesURL;
-(NSURL *)brokerURL;
-(NSURL *)paymentServicesURL;
-(NSURL *)paymentServicesMerchantURL;
-(void)setPaymentServicesMerchantURL:(NSURL *)arg1 ;
-(NSString *)userNotificationPushTopic;
-(void)setUserNotificationPushTopic:(NSString *)arg1 ;
-(void)setPeerPaymentServiceURL:(NSURL *)arg1 ;
-(void)setHasPeerPaymentAccount:(BOOL)arg1 ;
-(void)setCertificates:(NSArray *)arg1 ;
-(NSArray *)certificates;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setRegionCode:(NSString *)arg1 ;
-(NSString *)regionCode;
@end

