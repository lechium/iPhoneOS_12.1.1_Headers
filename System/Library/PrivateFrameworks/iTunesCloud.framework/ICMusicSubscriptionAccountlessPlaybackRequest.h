/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ICStoreRequestContext;

@interface ICMusicSubscriptionAccountlessPlaybackRequest : NSObject {

	NSString* _assetSourceStorefrontID;
	ICStoreRequestContext* _requestContext;
	long long _qualityOfService;
	long long _storeSubscriptionAdamID;

}

@property (nonatomic,copy) NSString * assetSourceStorefrontID;                           //@synthesize assetSourceStorefrontID=_assetSourceStorefrontID - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                 //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) long long storeSubscriptionAdamID;                        //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
-(long long)storeSubscriptionAdamID;
-(id)performWithResponseHandler:(/*^block*/id)arg1 ;
-(long long)qualityOfService;
-(void)setAssetSourceStorefrontID:(NSString *)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(NSString *)assetSourceStorefrontID;
-(id)initWithRequestContext:(id)arg1 storeSubscriptionAdamID:(long long)arg2 ;
-(void)setQualityOfService:(long long)arg1 ;
@end

