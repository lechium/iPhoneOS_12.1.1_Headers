/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKComplicationDisplay.h>
#import <libobjc.A.dylib/NTKZeusComplicationDisplay.h>

@protocol NTKComplicationDisplayObserver;
@class NTKZeusColorPalette, UIView, CLKDevice, NSString;

@interface NTKZeusComplicationView : UIView <NTKComplicationDisplay, NTKZeusComplicationDisplay> {

	UIView* _highlightView;
	BOOL canUseCurvedText;
	BOOL _highlighted;
	id<NTKComplicationDisplayObserver> displayObserver;
	unsigned long long _style;
	NTKZeusColorPalette* _palette;
	CLKDevice* _device;

}

@property (nonatomic,readonly) CLKDevice * device;                                                   //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                  //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
@property (assign,nonatomic) unsigned long long style;                                               //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NTKZeusColorPalette * palette;                                        //@synthesize palette=_palette - In the implementation block
+(id)viewForComplicationType:(unsigned long long)arg1 ;
-(NTKZeusColorPalette *)palette;
-(CLKDevice *)device;
-(void)applyPalette:(id)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3 ;
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setDisplayObserver:(id<NTKComplicationDisplayObserver>)arg1 ;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGRect)contentFrame;
@end

