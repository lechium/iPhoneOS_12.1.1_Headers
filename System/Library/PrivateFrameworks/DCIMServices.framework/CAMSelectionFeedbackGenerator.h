/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UISelectionFeedbackGenerator;

@interface CAMSelectionFeedbackGenerator : NSObject {

	UISelectionFeedbackGenerator* __feedbackGenerator;

}

@property (nonatomic,readonly) UISelectionFeedbackGenerator * _feedbackGenerator;              //@synthesize _feedbackGenerator=__feedbackGenerator - In the implementation block
-(void)prepareFeedback;
-(void)performFeedback;
-(UISelectionFeedbackGenerator *)_feedbackGenerator;
-(id)init;
@end

