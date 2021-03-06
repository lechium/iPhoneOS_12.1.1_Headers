/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString;

@interface HUUserManagementUserCell : UITableViewCell {

	NSString* _displayName;
	NSString* _invitationStatusString;

}

@property (nonatomic,retain) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * invitationStatusString;              //@synthesize invitationStatusString=_invitationStatusString - In the implementation block
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setInvitationStatusString:(NSString *)arg1 ;
-(NSString *)invitationStatusString;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)displayName;
@end

