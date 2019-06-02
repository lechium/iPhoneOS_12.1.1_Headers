/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol NSCopying, MSCLSettingsTableViewCellDelegate;
@class NSObject, UILabel, UISwitch, UIImage, NSString;

@interface MSCLSettingsTableViewCell : UITableViewCell {

	BOOL _disabled;
	CGSize _imageSize;
	BOOL _titleUsesTintColor;
	NSObject*<NSCopying> _value;
	UILabel* _valueLabel;
	UISwitch* _valueSwitch;
	long long _valueType;
	id<MSCLSettingsTableViewCellDelegate> _changeDelegate;

}

@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                          //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGSize imageSize;                                                         //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) UISwitch * switchControl; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL titleUsesTintColor;                                                  //@synthesize titleUsesTintColor=_titleUsesTintColor - In the implementation block
@property (nonatomic,copy) NSObject*<NSCopying> value;                                                 //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) long long valueType;                                                      //@synthesize valueType=_valueType - In the implementation block
@property (assign,nonatomic,__weak) id<MSCLSettingsTableViewCellDelegate> changeDelegate;              //@synthesize changeDelegate=_changeDelegate - In the implementation block
-(long long)valueType;
-(void)setChangeDelegate:(id<MSCLSettingsTableViewCellDelegate>)arg1 ;
-(BOOL)isDisabled;
-(void)setImageSize:(CGSize)arg1 ;
-(void)_reloadTitleTextColor;
-(id<MSCLSettingsTableViewCellDelegate>)changeDelegate;
-(void)setTitleUsesTintColor:(BOOL)arg1 ;
-(BOOL)titleUsesTintColor;
-(void)_valueChanged:(id)arg1 ;
-(void)setValueType:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSString *)title;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(NSObject*<NSCopying>)value;
-(void)setValue:(NSObject*<NSCopying>)arg1 ;
-(CGSize)imageSize;
-(UISwitch *)switchControl;
-(void)setDisabled:(BOOL)arg1 ;
@end
