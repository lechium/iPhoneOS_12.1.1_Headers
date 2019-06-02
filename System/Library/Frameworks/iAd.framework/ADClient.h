/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ADClient : NSObject
+(id)sharedClient;
-(void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2 ;
-(void)segmentDataForSignedInUserWithBlock:(/*^block*/id)arg1 ;
-(void)prepareForAdRequests;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(void)determineAppInstallationAttributionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)lookupAdConversionDetails:(/*^block*/id)arg1 ;
@end
