/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>

@protocol FMMapAnnotationGestureRecognizerDelegate;
@interface FMMapAnnotationGestureRecognizer : UIGestureRecognizer {

	id<FMMapAnnotationGestureRecognizerDelegate> _touchDelegate;

}

@property (assign,nonatomic) id<FMMapAnnotationGestureRecognizerDelegate> touchDelegate;              //@synthesize touchDelegate=_touchDelegate - In the implementation block
-(id<FMMapAnnotationGestureRecognizerDelegate>)touchDelegate;
-(void)setTouchDelegate:(id<FMMapAnnotationGestureRecognizerDelegate>)arg1 ;
-(id)init;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
@end

