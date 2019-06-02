/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEODirectionServiceTicket.h>

@class GEODirectionsRequest, GEOComposedRoute, NSArray, NSNumber, NSDictionary, NSString;

@interface _GEODirectionsRequestTicket : NSObject <GEODirectionServiceTicket> {

	GEODirectionsRequest* _request;
	BOOL _isReroute;
	GEOComposedRoute* _originalRoute;
	NSArray* _waypoints;
	BOOL _isDoom;
	NSNumber* _requestPriority;
	BOOL _active;
	BOOL _canceled;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) BOOL isReroute;                                 //@synthesize isReroute=_isReroute - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * originalRoute;               //@synthesize originalRoute=_originalRoute - In the implementation block
@property (nonatomic,retain) NSArray * waypoints;                            //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,readonly) BOOL active;                                  //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) BOOL canceled;                                //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,copy) NSNumber * requestPriority;                       //@synthesize requestPriority=_requestPriority - In the implementation block
@property (assign,nonatomic) BOOL isDoom;                                    //@synthesize isDoom=_isDoom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEODirectionsRequest * request;               //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
-(void)setOriginalRoute:(GEOComposedRoute *)arg1 ;
-(GEOComposedRoute *)originalRoute;
-(NSArray *)waypoints;
-(NSDictionary *)responseUserInfo;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)setWaypoints:(NSArray *)arg1 ;
-(BOOL)isReroute;
-(BOOL)canceled;
-(NSNumber *)requestPriority;
-(BOOL)isDoom;
-(void)setIsReroute:(BOOL)arg1 ;
-(void)setIsDoom:(BOOL)arg1 ;
-(void)setRequestPriority:(NSNumber *)arg1 ;
-(NSString *)description;
-(BOOL)active;
-(void)cancel;
-(GEODirectionsRequest *)request;
-(id)initWithRequest:(id)arg1 ;
@end

