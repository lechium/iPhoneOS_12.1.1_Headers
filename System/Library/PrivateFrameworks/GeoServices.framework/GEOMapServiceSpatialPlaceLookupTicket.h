/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, GEOMapServiceTraits;


@protocol GEOMapServiceSpatialPlaceLookupTicket <NSObject>
@property (nonatomic,readonly) NSArray * parameters; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@required
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 queue:(id)arg3;
-(void)submitWithHandler:(/*^block*/id)arg1 queue:(id)arg2;
-(void)cancel;
-(NSArray *)parameters;
-(GEOMapServiceTraits *)traits;

@end

