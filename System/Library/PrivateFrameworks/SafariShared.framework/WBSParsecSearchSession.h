/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class WBSCompletionQuery;


@protocol WBSParsecSearchSession <NSObject>
@property (assign,nonatomic,__weak) id<WBSParsecSearchSessionDelegate> delegate; 
@property (nonatomic,retain) WBSCompletionQuery * currentQuery; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (assign,setter=setUIScale:,nonatomic) double uiScale; 
@property (nonatomic,readonly) id<WBSParsecFeedbackDispatcher> feedbackDispatcher; 
@required
-(double)uiScale;
-(void)setUIScale:(double)arg1;
-(id<WBSParsecFeedbackDispatcher>)feedbackDispatcher;
-(void)setCurrentQuery:(id)arg1;
-(WBSCompletionQuery *)currentQuery;
-(void)setDelegate:(id)arg1;
-(id<WBSParsecSearchSessionDelegate>)delegate;
-(BOOL)isValid;

@end

