/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>
#import <libobjc.A.dylib/EKEventDetailTitleCellDelegate.h>

@protocol EKEventTitleDetailItemDelegate;
@class UITableViewCell, UIColor, NSDate, NSObject;

@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate> {

	UITableViewCell* _cell;
	UIColor* _color;
	BOOL _showDot;
	BOOL _cellNeedsUpdate;
	BOOL _hidesSeparator;
	BOOL _hasMapItemLaunchOptionFromTimeToLeaveNotification;
	NSDate* _proposedTime;
	NSObject*<EKEventTitleDetailItemDelegate> _editDelegate;

}

@property (assign,nonatomic) BOOL hidesSeparator;                                                        //@synthesize hidesSeparator=_hidesSeparator - In the implementation block
@property (nonatomic,retain) NSDate * proposedTime;                                                      //@synthesize proposedTime=_proposedTime - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<EKEventTitleDetailItemDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;                     //@synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification - In the implementation block
-(double)titleHeight;
-(void)setCellPosition:(int)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(NSDate *)proposedTime;
-(void)setProposedTime:(NSDate *)arg1 ;
-(NSObject*<EKEventTitleDetailItemDelegate>)editDelegate;
-(void)setEditDelegate:(NSObject*<EKEventTitleDetailItemDelegate>)arg1 ;
-(void)_updateCellIfNeededForWidth:(double)arg1 ;
-(BOOL)hidesSeparator;
-(BOOL)hasMapItemLaunchOptionFromTimeToLeaveNotification;
-(void)setHasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg1 ;
-(void)editButtonPressed;
-(BOOL)shouldShowEditButtonInline;
-(BOOL)minimalMode;
-(void)predictionWasActedOn;
-(void)setHidesSeparator:(BOOL)arg1 ;
-(void)reset;
@end

