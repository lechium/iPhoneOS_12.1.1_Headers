/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class _MKUILabel, NSLayoutConstraint, NSString;

@interface MKTransitMessageCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _messageLabel;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,copy) NSString * messageText; 
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
@end

