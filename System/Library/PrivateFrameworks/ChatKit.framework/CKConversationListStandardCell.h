/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKConversationListCell.h>

@class UIImageView, CKAvatarView;

@interface CKConversationListStandardCell : CKConversationListCell {

	UIImageView* _unreadIndicatorImageView;
	CKAvatarView* _avatarView;

}
+(id)identifierForConversation:(id)arg1 ;
-(id)avatarView;
-(void)_updateAvatarView;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(BOOL)avatarView:(id)arg1 shouldShowContact:(id)arg2 ;
-(void)updateContentsForConversation:(id)arg1 ;
-(void)increaseContrastDidChange;
-(void)updateContentsForConversation:(id)arg1 fastPreview:(BOOL)arg2 ;
-(void)updateUnreadIndicatorWithImage:(id)arg1 ;
-(void)updateFromLabelWithText:(id)arg1 ;
-(void)updateForEditing:(BOOL)arg1 ;
-(id)chevronImageView;
-(void)_calculateLayoutFrames;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end
