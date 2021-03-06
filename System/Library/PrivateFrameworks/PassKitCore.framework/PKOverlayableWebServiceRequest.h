/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKWebServiceRequest.h>

@class NSMutableDictionary, NSArray, NSDictionary;

@interface PKOverlayableWebServiceRequest : PKWebServiceRequest {

	NSMutableDictionary* _overlayParameters;
	NSMutableDictionary* _secureOverlayParameters;
	NSArray* _overridenKeys;
	BOOL _requiresConfigurationForRetry;
	BOOL _requiresConfigurationForRedirect;

}

@property (nonatomic,copy) NSDictionary * overlayParameters; 
@property (nonatomic,copy) NSDictionary * secureOverlayParameters; 
@property (assign,nonatomic) BOOL requiresConfigurationForRetry;                 //@synthesize requiresConfigurationForRetry=_requiresConfigurationForRetry - In the implementation block
@property (assign,nonatomic) BOOL requiresConfigurationForRedirect;              //@synthesize requiresConfigurationForRedirect=_requiresConfigurationForRedirect - In the implementation block
-(void)setOverlayValue:(id)arg1 forKey:(id)arg2 ;
-(id)overlayValueForKey:(id)arg1 ;
-(NSDictionary *)overlayParameters;
-(void)setSecureOverlayValue:(id)arg1 forKey:(id)arg2 ;
-(id)secureOverlayValueForKey:(id)arg1 ;
-(NSDictionary *)secureOverlayParameters;
-(void)_applyOverlayToDictionary:(id)arg1 ;
-(void)_applySecureOverlayToDictionary:(id)arg1 ;
-(void)_setOverriddenKeys:(id)arg1 ;
-(void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(BOOL)hasOverlayParameters;
-(BOOL)requiresConfigurationForRetry;
-(void)setRequiresConfigurationForRetry:(BOOL)arg1 ;
-(BOOL)requiresConfigurationForRedirect;
-(void)setRequiresConfigurationForRedirect:(BOOL)arg1 ;
-(void)setOverlayParameters:(NSDictionary *)arg1 ;
-(void)setSecureOverlayParameters:(NSDictionary *)arg1 ;
-(id)init;
@end

