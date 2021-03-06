/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKUITableViewCellWithPrimaryAndSecondaryFonts.h>

@protocol OS_dispatch_source;
@class EKUIOccurrenceTableViewCellLabel, ColorBarView, UIImageView, NSArray, UIVisualEffectView, NSLayoutConstraint, UIColor, NSDate, EKCalendarDate, NSString, NSDictionary, NSObject, UIVisualEffect;

@interface EKUIOccurrenceTableViewCell : EKUITableViewCellWithPrimaryAndSecondaryFonts {

	EKUIOccurrenceTableViewCellLabel* _travelTextLabel;
	EKUIOccurrenceTableViewCellLabel* _primaryLabel;
	EKUIOccurrenceTableViewCellLabel* _secondaryLabel;
	EKUIOccurrenceTableViewCellLabel* _travelDepartureTimeLabel;
	EKUIOccurrenceTableViewCellLabel* _topTimeLabel;
	EKUIOccurrenceTableViewCellLabel* _bottomTimeLabel;
	EKUIOccurrenceTableViewCellLabel* _countdownLabel;
	ColorBarView* _colorBarView;
	ColorBarView* _travelTimeColorBarView;
	UIImageView* _angleStripeBackgroundView;
	UIImageView* _accessoryImageView;
	NSArray* _ekUIOccurrenceTableViewCellConstraints;
	BOOL _areCurrentCellConstraintsForLargeText;
	UIVisualEffectView* _primaryVisualEffectParentView;
	UIVisualEffectView* _secondaryVisualEffectParentView;
	BOOL _travelTimeTemplate;
	BOOL _invitationTemplate;
	NSLayoutConstraint* _contentTop_to_travelTextBaseline_Constraint;
	NSLayoutConstraint* _contentTop_to_primaryTextBaseline_Constraint;
	NSLayoutConstraint* _contentBottom_to_secondaryTextBaseline_Constraint;
	NSLayoutConstraint* _primaryTextBaseline_to_secondaryTextBaseline_Constraint;
	NSLayoutConstraint* _travelTextBaseline_to_primaryTextBaseLine_Constraint;
	NSLayoutConstraint* _horizontalDividerBarBottom_to_colorBarTop_Constraint;
	NSLayoutConstraint* _contentTop_to_colorBarTop_Constraint;
	NSLayoutConstraint* _timeTextWidthConstraint;
	NSLayoutConstraint* _timeTextLeftMarginConstraint;
	NSLayoutConstraint* _timeTextRightMarginConstraint;
	NSLayoutConstraint* _countdownLabelRightMarginConstraint;
	NSLayoutConstraint* _countdownLabelBaseling_to_contentBottom_Constraint;
	double _travelTime;
	UIColor* _eventCalendarColor;
	UIColor* _selectedBackGroundColor;
	NSDate* _eventStartDateIncludingTravelTime;
	EKCalendarDate* _eventStartDate;
	EKCalendarDate* _eventEndDate;
	NSString* _eventTitle;
	NSString* _eventLocation;
	NSString* _topTimeString;
	NSString* _bottomTimeString;
	NSString* _countdownLabelString;
	NSString* _travelTextLabelString;
	NSString* _travelAddressString;
	NSString* _travelDepartureTimeString;
	NSDictionary* _secondaryStringDrawingAttributes;
	NSDictionary* _topTimeStringDrawingAttributes;
	NSDictionary* _bottomTimeStringDrawingAttributes;
	NSDictionary* _travelTextLabelStringDrawingAttributes;
	NSDictionary* _travelAddressStringDrawingAttributes;
	NSDictionary* _travelDepartureTimeStringDrawingAttributes;
	BOOL _isPast;
	BOOL _isAllDay;
	BOOL _isRecurring;
	BOOL _isBirthday;
	BOOL _tentative;
	BOOL _declined;
	BOOL _needsReply;
	BOOL _cancelled;
	BOOL _opaque;
	NSObject*<OS_dispatch_source> _countdownLabelUpdateTimer;
	BOOL _doesNotUseTemplate;
	BOOL _isTemplateCell;
	BOOL _isFakeInvitation;
	UIVisualEffect* _primaryVisualEffect;
	UIVisualEffect* _secondaryVisualEffect;

}

@property (assign,nonatomic) BOOL doesNotUseTemplate;                             //@synthesize doesNotUseTemplate=_doesNotUseTemplate - In the implementation block
@property (assign,nonatomic) BOOL isTemplateCell;                                 //@synthesize isTemplateCell=_isTemplateCell - In the implementation block
@property (assign,nonatomic) BOOL isFakeInvitation;                               //@synthesize isFakeInvitation=_isFakeInvitation - In the implementation block
@property (nonatomic,retain) UIVisualEffect * primaryVisualEffect;                //@synthesize primaryVisualEffect=_primaryVisualEffect - In the implementation block
@property (nonatomic,retain) UIVisualEffect * secondaryVisualEffect;              //@synthesize secondaryVisualEffect=_secondaryVisualEffect - In the implementation block
+(id)_allDayLocalizedString;
+(id)needsReplyBackgroundColor;
+(id)needsReplyStripeColor;
+(double)needsReplyStripeBackgroundAlpha;
+(id)tentativeBackgroundColor;
+(id)tentativeStripeColor;
+(double)tentativeStripeBackgroundAlpha;
+(id)cancelledDeclinedColorBarColor;
+(BOOL)vibrant;
+(id)normalPrimaryTextColor;
+(id)prefixPrimaryTextColor;
+(id)invitationPrimaryTextColor;
+(id)strikethroughPrimaryTextColor;
+(id)normalSecondaryTextColor;
+(id)strikethroughSecondaryTextColor;
+(id)normalTopTimeTextColor;
+(id)normalBottomTimeTextColor;
+(id)strikethroughTimeTextColor;
+(id)_needsReplyDot;
+(double)_rightImageSpacing;
+(id)_needsReplyAngledStripeBackground;
+(id)_tentativeAngledStripeBackground;
+(double)cellHeightForWidth:(double)arg1 ;
+(id)_nowLocalizedString;
+(id)reuseIdentifierForTemplate;
+(id)reuseIdentifierForTemplateWithTravelTime;
+(id)reuseIdentifierForTemplateInvitation;
+(id)allReuseIdentifiers;
+(id)reuseIdentifierForEvent:(id)arg1 ;
+(id)normalBackgroundColor;
+(void)_clearCaches;
+(void)initialize;
+(BOOL)requiresConstraintBasedLayout;
-(BOOL)isAllDay;
-(void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(BOOL)arg4 drawsDimmedForPast:(BOOL)arg5 ;
-(void)_updateContentForSizeCategoryChange:(id)arg1 ;
-(double)_verticalSpacingTopToBaselineForTopLabel;
-(double)_verticalSpacingTopToBaselineForBottomLabel;
-(double)_verticalSpacingBottomToBaselineForBottomLabel;
-(void)setCalendarColor:(id)arg1 ;
-(void)setDoesNotUseTemplate:(BOOL)arg1 ;
-(void)_uninstallCountdownTimer;
-(void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(BOOL)arg4 drawsDimmedForPast:(BOOL)arg5 includingTravelTime:(BOOL)arg6 ;
-(void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(BOOL)arg4 drawsDimmedForPast:(BOOL)arg5 includingTravelTime:(BOOL)arg6 includingCountdown:(BOOL)arg7 ;
-(void)_updateSecondaryTextLabel;
-(void)_updateTravelTimeLabel;
-(BOOL)doesNotUseTemplate;
-(BOOL)isTemplateCell;
-(BOOL)isFakeInvitation;
-(void)forceUpdateOfAllElements;
-(void)_updatePrimaryTextLabel;
-(void)_updateCountdownLabel;
-(void)_updateTopTimeLabel;
-(void)_updateBottomTimeLabel;
-(void)_updateTravelDepartureTimeLabel;
-(void)_updateColorBarColor;
-(void)_updateAngleBackgroundColor;
-(BOOL)isBirthday;
-(id)_birthdayIcon;
-(BOOL)needsReply;
-(void)contentCategorySizeChanged;
-(UIVisualEffect *)primaryVisualEffect;
-(UIVisualEffect *)secondaryVisualEffect;
-(id)_createParentVisualEffectViewWithVisualEffect:(id)arg1 ;
-(double)_widthForTimeViews;
-(double)_leftMarginForTimeViewsFromTimeWidth:(double)arg1 ;
-(double)_rightMarginForTimeViewsFromTimeWidth:(double)arg1 ;
-(id)_textForCountdownLabelWithCurrentDate:(id)arg1 ;
-(void)_installCountdownTimerWithFireDate:(id)arg1 ;
-(void)_countdownTimerFired;
-(BOOL)_eventIsNow;
-(void)_resetCountdownTimerBasedOnCurrentDateForStringGeneration:(id)arg1 ;
-(id)_textForTopTimeLabel;
-(id)_textForBottomTimeLabel;
-(id)_textForDepartureTimeLabel;
-(id)_selectedBackgroundViewWithColor:(id)arg1 ;
-(void)setPrimaryVisualEffect:(UIVisualEffect *)arg1 ;
-(void)setSecondaryVisualEffect:(UIVisualEffect *)arg1 ;
-(void)setColorBarLayerFilter:(id)arg1 ;
-(BOOL)isPast;
-(BOOL)isTentative;
-(id)_sharedNumberFormatter;
-(void)setIsTemplateCell:(BOOL)arg1 ;
-(void)setIsFakeInvitation:(BOOL)arg1 ;
-(void)_createViewsForReuseIdentifier:(id)arg1 ;
-(double)_verticalSpacingTopToTopForNonPrimaryLabel;
-(id)_setUpLargeTextConstraints;
-(id)_setUpStandardConstraints;
-(double)_verticalSpacingPrimaryLabelToTimeLabel;
-(void)_updateNumberOfLinesForLabel:(id)arg1 isRightAlignedInStandardLayout:(BOOL)arg2 ;
-(id)accessoryImage;
-(void)_setUpConstraints;
-(BOOL)isDeclined;
-(void)dealloc;
-(id)imageView;
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)textLabel;
-(id)detailTextLabel;
-(id)reuseIdentifier;
-(BOOL)isCancelled;
-(void)_updateAccessoryImage;
@end

