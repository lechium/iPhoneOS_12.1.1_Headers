/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>
#import <libobjc.A.dylib/EKUITintColorUpdateDelegate.h>

@protocol EKUITintColorUpdateDelegate;
@class TintColorUpdateView, NSObject;

@interface EKUIVisualEffectView : UIVisualEffectView <EKUITintColorUpdateDelegate> {

	TintColorUpdateView* _updateView;
	NSObject*<EKUITintColorUpdateDelegate> _tintColorDelegate;

}

@property (assign,nonatomic,__weak) NSObject*<EKUITintColorUpdateDelegate> tintColorDelegate;              //@synthesize tintColorDelegate=_tintColorDelegate - In the implementation block
-(void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2 ;
-(NSObject*<EKUITintColorUpdateDelegate>)tintColorDelegate;
-(void)subTintColorUpdatedToColor:(id)arg1 ;
-(void)setTintColorDelegate:(NSObject*<EKUITintColorUpdateDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

