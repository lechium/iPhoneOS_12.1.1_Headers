/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <UIKitCore/UIView.h>

@class ASCompetitionScoreViewConfiguration, ASCompetitionParticipantScoreView, UIImageView, UILabel, NSNumber;

@interface ASCompetitionScoreView : UIView {

	ASCompetitionScoreViewConfiguration* _configuration;
	ASCompetitionParticipantScoreView* _myScoreView;
	ASCompetitionParticipantScoreView* _opponentScoreView;
	UIImageView* _achievementThumbnailView;
	UILabel* _scoreTypeHeaderLabel;
	NSNumber* _previousLayoutWidth;
	BOOL _isRTLLayout;

}

@property (nonatomic,readonly) double lastBaselineY; 
+(double)preferredHeightForConfiguration:(id)arg1 friend:(id)arg2 ;
-(void)layoutForWidth:(double)arg1 ;
-(double)lastBaselineY;
-(double)participantScoreViewWidthForParticipant:(long long)arg1 maximumWidth:(double)arg2 ;
-(void)setFriend:(id)arg1 competition:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
@end
