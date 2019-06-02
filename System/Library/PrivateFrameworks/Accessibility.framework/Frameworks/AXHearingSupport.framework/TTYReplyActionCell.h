/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol TTYReplyActionCellDelegate;
@interface TTYReplyActionCell : UITableViewCell {

	id<TTYReplyActionCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TTYReplyActionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andDelegate:(id)arg3 ;
-(void)setDelegate:(id<TTYReplyActionCellDelegate>)arg1 ;
-(id<TTYReplyActionCellDelegate>)delegate;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

