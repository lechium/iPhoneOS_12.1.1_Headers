/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTScenarioTrigger.h>

@class RTLocationOfInterest;

@interface RTScenarioTriggerFirstTimeAtLocation : RTScenarioTrigger {

	RTLocationOfInterest* _locationOfInterest;

}

@property (nonatomic,readonly) RTLocationOfInterest * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
+(BOOL)supportsSecureCoding;
-(RTLocationOfInterest *)locationOfInterest;
-(id)initWithLocationOfInterest:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

