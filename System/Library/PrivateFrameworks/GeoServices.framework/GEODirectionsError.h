/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GEODirectionsError <NSObject>
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> incidentMessage; 
@property (nonatomic,readonly) long long firstDirectionsErrorCode; 
@required
-(BOOL)hasError:(long long)arg1;
-(id<GEOTransitRoutingIncidentMessage>)incidentMessage;
-(long long)firstDirectionsErrorCode;
-(NSString *)localizedTitle;
-(NSString *)localizedDescription;

@end

