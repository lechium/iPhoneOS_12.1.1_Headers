/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOTransitTimeRange.h>

@class NSDate, NSString;

@interface _GEOTimeRange : NSObject <GEOTransitTimeRange> {

	GEOPBTransitTimeRange _pbTimeRange;
	GEOPDTimeRange _pdTimeRange;
	BOOL _usePB;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
-(BOOL)contains:(id)arg1 ;
-(id)initWithPDTimeRange:(GEOPDTimeRange)arg1 ;
-(id)initWithPBTimeRange:(GEOPBTransitTimeRange)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)startTime;
-(double)duration;
@end
