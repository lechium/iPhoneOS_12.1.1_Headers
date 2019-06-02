/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSUUID, NSArray, NSDictionary;

@interface RTRouteManagerTransition : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSUUID* _originLoiIdentifier;
	NSUUID* _destinationLoiIdentifier;
	NSUUID* _originVisitIdentifier;
	NSUUID* _destinationVisitIdentifier;
	NSArray* _locations;
	double _motionAutomotiveRatio;
	NSDictionary* _locationTypeDistribution;
	double _majorGapLength;

}

@property (nonatomic,retain) NSDictionary * locationTypeDistribution;                 //@synthesize locationTypeDistribution=_locationTypeDistribution - In the implementation block
@property (assign,nonatomic) double majorGapLength;                                   //@synthesize majorGapLength=_majorGapLength - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * originLoiIdentifier;                     //@synthesize originLoiIdentifier=_originLoiIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * destinationLoiIdentifier;                //@synthesize destinationLoiIdentifier=_destinationLoiIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * originVisitIdentifier;                   //@synthesize originVisitIdentifier=_originVisitIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * destinationVisitIdentifier;              //@synthesize destinationVisitIdentifier=_destinationVisitIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * locations;                                       //@synthesize locations=_locations - In the implementation block
@property (assign,nonatomic) double motionAutomotiveRatio;                            //@synthesize motionAutomotiveRatio=_motionAutomotiveRatio - In the implementation block
-(NSArray *)locations;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSUUID *)originVisitIdentifier;
-(NSUUID *)destinationVisitIdentifier;
-(NSUUID *)originLoiIdentifier;
-(NSUUID *)destinationLoiIdentifier;
-(double)motionAutomotiveRatio;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 originLoiIdentifier:(id)arg3 destinationLoiIdentifier:(id)arg4 originVisitIdentifier:(id)arg5 destinationVisitIdentifier:(id)arg6 ;
-(void)setMotionAutomotiveRatio:(double)arg1 ;
-(NSDictionary *)locationTypeDistribution;
-(void)setLocationTypeDistribution:(NSDictionary *)arg1 ;
-(double)majorGapLength;
-(void)setMajorGapLength:(double)arg1 ;
-(id)description;
-(void)setLocations:(NSArray *)arg1 ;
@end

