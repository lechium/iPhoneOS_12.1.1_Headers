/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSDictionary;

@interface SBSRemoteAlertDefinition : NSObject <BSXPCCoding, BSDescriptionProviding> {

	NSString* _serviceName;
	NSString* _vcClassName;
	NSDictionary* _userInfo;
	NSString* _impersonatedCarPlayAppIdentifier;
	BOOL _forCarPlay;

}

@property (nonatomic,retain) NSDictionary * userInfo;                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSString * impersonatedCarPlayAppIdentifier;              //@synthesize impersonatedCarPlayAppIdentifier=_impersonatedCarPlayAppIdentifier - In the implementation block
@property (assign,getter=isForCarPlay,nonatomic) BOOL forCarPlay;                      //@synthesize forCarPlay=_forCarPlay - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                                 //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSString * viewControllerClassName;                     //@synthesize vcClassName=_vcClassName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2 ;
-(void)setImpersonatedCarPlayAppIdentifier:(NSString *)arg1 ;
-(void)setForCarPlay:(BOOL)arg1 ;
-(NSString *)impersonatedCarPlayAppIdentifier;
-(BOOL)isForCarPlay;
-(NSString *)viewControllerClassName;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)init;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)serviceName;
@end

