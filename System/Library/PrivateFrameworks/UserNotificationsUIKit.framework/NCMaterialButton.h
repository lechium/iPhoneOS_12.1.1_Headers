/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSMutableDictionary;

@interface NCMaterialButton : UIButton {

	NSMutableDictionary* _styling;
	NSMutableDictionary* _imageViewStyling;

}

@property (nonatomic,retain) NSMutableDictionary * styling;                       //@synthesize styling=_styling - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageViewStyling;              //@synthesize imageViewStyling=_imageViewStyling - In the implementation block
-(void)_applyStyling;
-(void)_applyButtonStyling;
-(void)_setFlagsRelatedToState:(unsigned long long)arg1 to:(BOOL)arg2 ;
-(void)_applyImageViewStyling;
-(void)setStyling:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setImageViewStyling:(id)arg1 forState:(unsigned long long)arg2 ;
-(NSMutableDictionary *)imageViewStyling;
-(void)setImageViewStyling:(NSMutableDictionary *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(NSMutableDictionary *)styling;
-(void)setStyling:(NSMutableDictionary *)arg1 ;
@end

