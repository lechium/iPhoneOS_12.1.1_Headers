/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol _PASAssetProtocol <NSObject>
@property (nonatomic,readonly) unsigned long long assetVersion; 
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) unsigned long long compatibilityVersion; 
@property (nonatomic,readonly) unsigned long long bestAssetVersionObserved; 
@required
-(unsigned long long)bestAssetVersionObserved;
-(unsigned long long)assetVersion;
-(NSString *)assetType;
-(BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
-(id)registerUpdateHandler:(/*^block*/id)arg1;
-(id)pathForResourceWithName:(id)arg1 extension:(id)arg2;
-(unsigned long long)compatibilityVersion;

@end

