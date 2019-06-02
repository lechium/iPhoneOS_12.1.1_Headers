/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCEndpointConfiguration : NSObject {

	NSString* _clientAPIBaseURLString;
	NSString* _notificationsBaseURLString;
	NSString* _staticAssetBaseUrlString;
	NSString* _remoteDataSourceBaseUrlString;

}

@property (nonatomic,readonly) NSString * clientAPIBaseURLString;                     //@synthesize clientAPIBaseURLString=_clientAPIBaseURLString - In the implementation block
@property (nonatomic,readonly) NSString * notificationsBaseURLString;                 //@synthesize notificationsBaseURLString=_notificationsBaseURLString - In the implementation block
@property (nonatomic,readonly) NSString * staticAssetBaseUrlString;                   //@synthesize staticAssetBaseUrlString=_staticAssetBaseUrlString - In the implementation block
@property (nonatomic,readonly) NSString * remoteDataSourceBaseUrlString;              //@synthesize remoteDataSourceBaseUrlString=_remoteDataSourceBaseUrlString - In the implementation block
-(id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 staticAssetBaseUrlString:(id)arg3 remoteDataSourceBaseUrl:(id)arg4 ;
-(NSString *)clientAPIBaseURLString;
-(NSString *)notificationsBaseURLString;
-(NSString *)staticAssetBaseUrlString;
-(NSString *)remoteDataSourceBaseUrlString;
-(id)initWithClientAPIBaseURLString:(id)arg1 notificationsBaseURLString:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
