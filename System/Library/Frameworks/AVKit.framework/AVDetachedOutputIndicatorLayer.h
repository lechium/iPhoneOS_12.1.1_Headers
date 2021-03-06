/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSAttributedString, CATextLayer, CALayer;

@interface AVDetachedOutputIndicatorLayer : CALayer {

	NSAttributedString* _attributedText;
	CGSize _imageSize;
	UIEdgeInsets _languageAwareOutsets;
	double _lineHeight;
	double _baselineOffset;
	long long _indicatorKind;
	CATextLayer* _textLayer;
	CALayer* _imageLayer;

}
-(id)initWithTraitCollection:(id)arg1 indicatorKind:(long long)arg2 opaque:(BOOL)arg3 ;
-(void)_layoutForBoundsChange;
-(CGRect)_textBoundingRectWhenDrawnInRect:(CGRect)arg1 ;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
@end

