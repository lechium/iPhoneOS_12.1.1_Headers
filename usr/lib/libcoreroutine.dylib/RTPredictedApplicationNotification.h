/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTPredictedApplicationNotification : RTNotification {

	NSArray* _predictedApplications;

}

@property (nonatomic,retain) NSArray * predictedApplications;              //@synthesize predictedApplications=_predictedApplications - In the implementation block
-(id)initWithPredictedApplications:(id)arg1 ;
-(NSArray *)predictedApplications;
-(void)setPredictedApplications:(NSArray *)arg1 ;
@end

