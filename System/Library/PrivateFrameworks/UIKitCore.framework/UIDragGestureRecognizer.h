/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UIDragEvent, _UIInternalDraggingSessionDestination, _UIDropSessionImpl;

@interface UIDragGestureRecognizer : UIGestureRecognizer {

	UIDragEvent* _dragEvent;

}

@property (getter=_dragEvent,nonatomic,__weak,readonly) UIDragEvent * dragEvent;                        //@synthesize dragEvent=_dragEvent - In the implementation block
@property (assign,nonatomic,__weak) id<UIDragGestureRecognizerDelegate> delegate; 
@property (nonatomic,readonly) _UIInternalDraggingSessionDestination * sessionDestination; 
@property (nonatomic,readonly) _UIDropSessionImpl * dropSession; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(_UIDropSessionImpl *)dropSession;
-(BOOL)_shouldReceiveTouch:(id)arg1 recognizerView:(id)arg2 touchView:(id)arg3 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(_UIInternalDraggingSessionDestination *)sessionDestination;
-(id)_dragEvent;
-(BOOL)_shouldReceiveDragEvent:(id)arg1 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
@end

