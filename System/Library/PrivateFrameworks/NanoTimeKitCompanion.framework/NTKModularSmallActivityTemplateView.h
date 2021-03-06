/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NTKRingsAndDotsView, NSMutableArray;

@interface NTKModularSmallActivityTemplateView : NTKModularTemplateView {

	NTKRingsAndDotsView* _ringsView;
	NSMutableArray* _ringsFillFractions;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(void)load;
-(void)_layoutContentView;
-(void)setIsXL:(BOOL)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5 ;
-(void)applyColorScheme:(id)arg1 ;
-(void)_configureContentSubviews;
-(void)setSecondaryForegroundColor:(id)arg1 ;
-(void)_setLayoutEmptyRingsNoDot;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_update;
-(void)setForegroundColor:(id)arg1 ;
@end

