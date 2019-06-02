/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableData;

@interface GEORouteTrafficBuilder : NSObject {

	NSMutableData* _trafficColors;
	NSMutableData* _trafficOffsets;
	unsigned _trafficDistance;

}
-(void)addTrafficFromRoute:(id)arg1 withStepRange:(NSRange)arg2 ;
-(void)copyTrafficToRoute:(id)arg1 ;
-(void)addTrafficFromRoute:(id)arg1 from:(unsigned)arg2 to:(unsigned)arg3 ;
-(void)addTrafficFromETARoute:(id)arg1 ;
-(void)_removeDuplicateTraffic;
-(id)init;
@end
