/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PETScalarEventTracker;

@interface PPMFeedbackPortraitEngaged : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(PETScalarEventTracker *)tracker;
-(void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 variantId:(id)arg3 type:(PPMPortraitFeedbackType_)arg4 domain:(PPMPortraitDomain_)arg5 numElementsLog2:(unsigned long long)arg6 ;
-(id)init;
@end

