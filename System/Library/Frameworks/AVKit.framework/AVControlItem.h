/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVButton, NSString, UIImage, UIView;

@interface AVControlItem : NSObject {

	AVButton* _button;
	BOOL _enabled;
	long long _type;
	NSString* _title;
	UIImage* _image;
	/*^block*/id _action;

}

@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,copy) id action;                                    //@synthesize action=_action - In the implementation block
-(id)initWithTitle:(id)arg1 type:(long long)arg2 ;
-(void)_updateButton;
-(void)_buttonTouchUpInside:(id)arg1 ;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)setAccessibilityAttributedLabel:(id)arg1 ;
-(void)setAccessibilityHint:(id)arg1 ;
-(void)setAccessibilityAttributedHint:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(UIView *)view;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSString *)title;
-(id)action;
-(long long)type;
-(void)setAction:(id)arg1 ;
@end

