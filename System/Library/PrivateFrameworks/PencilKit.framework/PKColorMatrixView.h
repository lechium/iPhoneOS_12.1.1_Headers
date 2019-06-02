/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKColorPickerCrosshairViewDelegate.h>
#import <libobjc.A.dylib/_PKColorPickerImplementation.h>

@protocol _PKColorPickerImplementationDelegate;
@class UIColor, NSArray, NSString;

@interface PKColorMatrixView : UIView <PKColorPickerCrosshairViewDelegate, _PKColorPickerImplementation> {

	UIColor* selectedColor;
	id<_PKColorPickerImplementationDelegate> _colorPickerDelegate;
	NSArray* _colorMatrix;
	NSArray* _colorButtons;

}

@property (nonatomic,retain) NSArray * colorMatrix;                                                            //@synthesize colorMatrix=_colorMatrix - In the implementation block
@property (nonatomic,retain) NSArray * colorButtons;                                                           //@synthesize colorButtons=_colorButtons - In the implementation block
@property (nonatomic,retain) UIColor * selectedColor; 
@property (assign,nonatomic,__weak) id<_PKColorPickerImplementationDelegate> colorPickerDelegate;              //@synthesize colorPickerDelegate=_colorPickerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultColorMatrix;
+(id)_representableColorForColor:(id)arg1 ;
-(void)didTapColorButton:(id)arg1 ;
-(void)setColorButtons:(NSArray *)arg1 ;
-(id)_pointFromButton:(id)arg1 ;
-(id)_colorForPoint:(id)arg1 ;
-(id<_PKColorPickerImplementationDelegate>)colorPickerDelegate;
-(NSArray *)colorButtons;
-(CGRect)_frameForViewWithPoint:(id)arg1 ;
-(id)_pointForColor:(id)arg1 ;
-(id)_boundedPointForPoint:(id)arg1 ;
-(id)_pointForCGPoint:(CGPoint)arg1 ;
-(CGRect)frameForColorPickerCrosshairView:(id)arg1 ;
-(id)colorForColorPickerCrosshairView:(id)arg1 frame:(CGRect)arg2 ;
-(unsigned long long)cornerPositionForColorPickerCrosshairView:(id)arg1 ;
-(void)colorPickerCrosshairViewShouldUpdateColor:(id)arg1 point:(CGPoint)arg2 ;
-(void)colorPickerCrosshairViewShouldUpdateWithColor:(id)arg1 ;
-(id)representableColorForColor:(id)arg1 ;
-(void)setColorPickerDelegate:(id<_PKColorPickerImplementationDelegate>)arg1 ;
-(UIColor *)selectedColor;
-(void)setSelectedColor:(UIColor *)arg1 ;
-(NSArray *)colorMatrix;
-(void)setColorMatrix:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
