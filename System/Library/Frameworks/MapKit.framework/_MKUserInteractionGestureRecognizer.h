/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>

@protocol _MKUserInteractionGestureRecognizerTouchObserver;
@class NSMutableSet;

@interface _MKUserInteractionGestureRecognizer : UIGestureRecognizer {

	NSMutableSet* _activeTouches;
	id<_MKUserInteractionGestureRecognizerTouchObserver> _touchObserver;

}

@property (assign,nonatomic,__weak) id<_MKUserInteractionGestureRecognizerTouchObserver> touchObserver;              //@synthesize touchObserver=_touchObserver - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id<_MKUserInteractionGestureRecognizerTouchObserver>)touchObserver;
-(void)setTouchObserver:(id<_MKUserInteractionGestureRecognizerTouchObserver>)arg1 ;
@end

