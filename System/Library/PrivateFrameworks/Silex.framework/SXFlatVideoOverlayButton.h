/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/SXVideoOverlayButton.h>

@interface SXFlatVideoOverlayButton : UIButton <SXVideoOverlayButton> {

	long long _style;
	id _target;
	SEL _action;
	int _state;

}

@property (assign,nonatomic) int state;              //@synthesize state=_state - In the implementation block
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)recalculateBackdropView;
-(id)_normalButtonImage;
-(id)_highlightedButtonImage;
-(id)_normalFailedButtonImage;
-(id)_highlightedFailedButtonImage;
-(id)_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3 glyphMaskImageName:(id)arg4 ;
-(int)state;
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(void)setState:(int)arg1 ;
-(void)_handleTap:(id)arg1 ;
@end

