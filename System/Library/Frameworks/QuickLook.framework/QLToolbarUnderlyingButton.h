/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSString;

@interface QLToolbarUnderlyingButton : UIButton {

	NSString* _identifier;
	CGRect _selectedIndicatorBounds;

}

@property (copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (assign) CGRect selectedIndicatorBounds;              //@synthesize selectedIndicatorBounds=_selectedIndicatorBounds - In the implementation block
-(CGRect)selectedIndicatorBounds;
-(void)setSelectedIndicatorBounds:(CGRect)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(CGRect)_selectedIndicatorBounds;
@end

