/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionWidget.framework/AppPredictionWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, NSDate;

@interface APWSettings : NSObject {

	BOOL _widgetFeedbackEnabled;
	NSUserDefaults* _internalSettings;
	NSDate* _lastViewDidDisappearDate;

}

@property (nonatomic,readonly) NSUserDefaults * internalSettings;                                    //@synthesize internalSettings=_internalSettings - In the implementation block
@property (assign,getter=isDebugUIEnabled,nonatomic) BOOL debugUIEnabled; 
@property (assign,getter=isSnapshotLabelEnabled,nonatomic) BOOL snapshotLabelEnabled; 
@property (assign,getter=isDemoModeEnabled,nonatomic) BOOL demoModeEnabled; 
@property (assign,getter=isForceEmptyEnabled,nonatomic) BOOL forceEmptyEnabled; 
@property (assign,getter=isWidgetFeedbackEnabled,nonatomic) BOOL widgetFeedbackEnabled;              //@synthesize widgetFeedbackEnabled=_widgetFeedbackEnabled - In the implementation block
@property (nonatomic,copy) NSDate * lastViewDidDisappearDate;                                        //@synthesize lastViewDidDisappearDate=_lastViewDidDisappearDate - In the implementation block
+(id)sharedSettings;
-(BOOL)isDemoModeEnabled;
-(NSUserDefaults *)internalSettings;
-(BOOL)isDebugUIEnabled;
-(void)setDebugUIEnabled:(BOOL)arg1 ;
-(long long)numberOfActionPredictions;
-(void)setNumberOfActionPredictions:(long long)arg1 ;
-(BOOL)isActionsEnabled;
-(void)setActionsEnabled:(BOOL)arg1 ;
-(BOOL)isSnapshotLabelEnabled;
-(void)setSnapshotLabelEnabled:(BOOL)arg1 ;
-(NSDate *)lastViewDidDisappearDate;
-(void)setDemoModeEnabled:(BOOL)arg1 ;
-(BOOL)isForceEmptyEnabled;
-(void)setForceEmptyEnabled:(BOOL)arg1 ;
-(BOOL)isWidgetFeedbackEnabled;
-(id)_appsForDemoMode;
-(void)setWidgetFeedbackEnabled:(BOOL)arg1 ;
-(void)setLastViewDidDisappearDate:(NSDate *)arg1 ;
@end

