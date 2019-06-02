/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol EKEventDetailPredictedLocationCellDelegate;
@class EKEvent, EKStructuredLocation, EKEventDetailsHighlightControl, UIButton, UIView;

@interface EKEventDetailPredictedLocationCell : UITableViewCell {

	EKEvent* _event;
	EKStructuredLocation* _location;
	EKEventDetailsHighlightControl* _titleControl;
	UIButton* _dismissButton;
	UIView* _topSeparator;
	UIView* _bottomSeparator;
	BOOL _showsTopSeparator;
	id<EKEventDetailPredictedLocationCellDelegate> _delegate;

}

@property (__weak) id<EKEventDetailPredictedLocationCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsTopSeparator;                                     //@synthesize showsTopSeparator=_showsTopSeparator - In the implementation block
+(id)_separatorColor;
-(id)initEditable:(BOOL)arg1 ;
-(void)confirmLocationTapped:(id)arg1 ;
-(void)rejectLocationTapped:(id)arg1 ;
-(void)_disambiguateIfNeeded;
-(void)_setEventDate:(id)arg1 ;
-(void)setShowsTopSeparator:(BOOL)arg1 ;
-(BOOL)showsTopSeparator;
-(id)init;
-(void)setDelegate:(id<EKEventDetailPredictedLocationCellDelegate>)arg1 ;
-(id<EKEventDetailPredictedLocationCellDelegate>)delegate;
-(void)setEvent:(id)arg1 ;
@end

