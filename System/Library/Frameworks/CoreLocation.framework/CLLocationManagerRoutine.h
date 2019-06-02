/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CLLocationManagerRoutineProxy;

@interface CLLocationManagerRoutine : NSObject {

	_CLLocationManagerRoutineProxy* _locationManagerRoutineProxy;

}

@property (nonatomic,retain) _CLLocationManagerRoutineProxy * locationManagerRoutineProxy;              //@synthesize locationManagerRoutineProxy=_locationManagerRoutineProxy - In the implementation block
@property (assign,nonatomic) id<CLLocationManagerRoutineDelegate> delegate; 
-(_CLLocationManagerRoutineProxy *)locationManagerRoutineProxy;
-(void)setLocationManagerRoutineProxy:(_CLLocationManagerRoutineProxy *)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)fetchPredictedApplicationsAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)startUpdatingPredictedApplications;
-(void)stopUpdatingPredictedApplications;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<CLLocationManagerRoutineDelegate>)arg1 ;
-(id<CLLocationManagerRoutineDelegate>)delegate;
@end

