/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOServiceRequester.h>

@interface GEOGeocodeRequester : GEOServiceRequester
+(id)sharedGeocodeRequester;
-(void)batchReverseGeocode:(id)arg1 auditToken:(id)arg2 success:(/*^block*/id)arg3 networkActivity:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)cancelBatchReverseGeocode:(id)arg1 ;
@end

