/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <PassKitCore/PKMicaLayer.h>

@class CALayer, NSString;

@interface PKPhoneGlyphLayer : PKMicaLayer {

	CALayer* _highlightLayer;
	CGPoint _highlightOffscreenPosition;
	CGPoint _highlightOnscreenPosition;
	NSString* _phoneWiggleAnimationKey;

}
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 package:(id)arg2 ;
-(void)_restartPhoneWiggleIfNecessary;
-(void)_startPhoneWiggle;
-(void)_endPhoneWiggle;
-(id)init;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

