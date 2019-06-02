/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UISelectionFeedbackGeneratorConfiguration;

@interface UISelectionFeedbackGenerator : UIFeedbackGenerator {

	double _lastSelectionChangeTime;

}

@property (assign,nonatomic) double lastSelectionChangeTime;                                                                                    //@synthesize lastSelectionChangeTime=_lastSelectionChangeTime - In the implementation block
@property (getter=_selectionConfiguration,nonatomic,readonly) _UISelectionFeedbackGeneratorConfiguration * selectionConfiguration; 
+(Class)_configurationClass;
-(void)selectionChanged;
-(void)userInteractionStarted;
-(void)userInteractionEnded;
-(void)userInteractionCancelled;
-(void)_deactivated;
-(id)_stats_key;
-(void)_playFeedbackWithSpeed:(double)arg1 ;
-(id)_selectionConfiguration;
-(double)lastSelectionChangeTime;
-(void)setLastSelectionChangeTime:(double)arg1 ;
@end
