/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PETDistributionEventTracker;

@interface PPMTopicDonation : NSObject {

	PETDistributionEventTracker* _tracker;

}

@property (nonatomic,readonly) PETDistributionEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(PETDistributionEventTracker *)tracker;
-(void)trackEventWithScalar:(double)arg1 source:(PPMTopicDonationSource_)arg2 ;
-(id)init;
@end

