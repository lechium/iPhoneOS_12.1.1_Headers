/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICUserIdentityProperties, NSArray, NSMapTable, NSMutableDictionary, NSMutableArray, ICUserIdentityStore;

@interface _ICUserCredentialProviderRequestSession : NSObject {

	ICUserIdentityProperties* _activeICloudAccountProperties;
	NSArray* _credentialRequests;
	NSMapTable* _delegationCredentialRequestToSpecificUserIdentity;
	NSMapTable* _delegationCredentialRequestToIdentityProperties;
	NSMutableDictionary* _delegationUserIdentityToUUIDs;
	long long _maximumQualityOfService;
	NSMutableArray* _pendingPropertyLoadCredentialRequests;
	NSMutableArray* _pendingResponseCredentialRequests;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) ICUserIdentityProperties * activeICloudAccountProperties;                      //@synthesize activeICloudAccountProperties=_activeICloudAccountProperties - In the implementation block
@property (nonatomic,copy,readonly) NSArray * credentialRequests;                                         //@synthesize credentialRequests=_credentialRequests - In the implementation block
@property (nonatomic,retain) NSMapTable * delegationCredentialRequestToSpecificUserIdentity;              //@synthesize delegationCredentialRequestToSpecificUserIdentity=_delegationCredentialRequestToSpecificUserIdentity - In the implementation block
@property (nonatomic,retain) NSMapTable * delegationCredentialRequestToIdentityProperties;                //@synthesize delegationCredentialRequestToIdentityProperties=_delegationCredentialRequestToIdentityProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * delegationUserIdentityToUUIDs;                         //@synthesize delegationUserIdentityToUUIDs=_delegationUserIdentityToUUIDs - In the implementation block
@property (nonatomic,readonly) ICUserIdentityStore * identityStore; 
@property (nonatomic,readonly) long long maximumQualityOfService;                                         //@synthesize maximumQualityOfService=_maximumQualityOfService - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingPropertyLoadCredentialRequests;                      //@synthesize pendingPropertyLoadCredentialRequests=_pendingPropertyLoadCredentialRequests - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingResponseCredentialRequests;                          //@synthesize pendingResponseCredentialRequests=_pendingResponseCredentialRequests - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingResponses; 
@property (nonatomic,copy,readonly) id responseHandler;                                                   //@synthesize responseHandler=_responseHandler - In the implementation block
-(long long)maximumQualityOfService;
-(void)setActiveICloudAccountProperties:(ICUserIdentityProperties *)arg1 ;
-(NSMapTable *)delegationCredentialRequestToSpecificUserIdentity;
-(void)setDelegationUserIdentityToUUIDs:(NSMutableDictionary *)arg1 ;
-(NSMapTable *)delegationCredentialRequestToIdentityProperties;
-(NSMutableDictionary *)delegationUserIdentityToUUIDs;
-(NSMutableArray *)pendingResponseCredentialRequests;
-(ICUserIdentityProperties *)activeICloudAccountProperties;
-(BOOL)hasPendingResponses;
-(NSMutableArray *)pendingPropertyLoadCredentialRequests;
-(void)setDelegationCredentialRequestToSpecificUserIdentity:(NSMapTable *)arg1 ;
-(void)setDelegationCredentialRequestToIdentityProperties:(NSMapTable *)arg1 ;
-(NSArray *)credentialRequests;
-(void)setPendingPropertyLoadCredentialRequests:(NSMutableArray *)arg1 ;
-(id)initWithCredentialRequests:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)setPendingResponseCredentialRequests:(NSMutableArray *)arg1 ;
-(ICUserIdentityStore *)identityStore;
-(id)responseHandler;
@end

