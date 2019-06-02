/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class TVRCDevice, UIView;

@interface _TVRDropDownTableViewCell : UITableViewCell {

	BOOL _showSeparator;
	TVRCDevice* _device;
	UIView* _separator;

}

@property (nonatomic,retain) UIView * separator;               //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) TVRCDevice * device;              //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) BOOL showSeparator;               //@synthesize showSeparator=_showSeparator - In the implementation block
-(BOOL)showSeparator;
-(void)setShowSeparator:(BOOL)arg1 ;
-(TVRCDevice *)device;
-(void)setDevice:(TVRCDevice *)arg1 ;
-(void)_applyFilterForDevice:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSeparator:(UIView *)arg1 ;
-(UIView *)separator;
@end

