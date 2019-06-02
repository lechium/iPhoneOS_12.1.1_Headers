/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIWindow.h>

@class UIView;

@interface ICHandwritingDebugWindow : UIWindow {

	BOOL _draggingWindow;
	BOOL _resizingWindow;
	UIView* _resizeTriangle;
	CGPoint _initialTouchLocation;

}

@property (assign,getter=isDraggingWindow,nonatomic) BOOL draggingWindow;                                 //@synthesize draggingWindow=_draggingWindow - In the implementation block
@property (assign,getter=isResizingWindow,nonatomic) BOOL resizingWindow;                                 //@synthesize resizingWindow=_resizingWindow - In the implementation block
@property (assign,nonatomic) CGPoint initialTouchLocation;                                                //@synthesize initialTouchLocation=_initialTouchLocation - In the implementation block
@property (nonatomic,retain) UIView * resizeTriangle;                                                     //@synthesize resizeTriangle=_resizeTriangle - In the implementation block
@property (assign,nonatomic,__weak) id<ICHandwritingDebugDelegate> handwritingDebugDelegate; 
+(CGRect)preferredFrame;
+(void)savePreferredFrame:(CGRect)arg1 ;
-(void)setResizeTriangle:(UIView *)arg1 ;
-(UIView *)resizeTriangle;
-(void)updateResizeTriangleFrame;
-(void)setDraggingWindow:(BOOL)arg1 ;
-(void)setResizingWindow:(BOOL)arg1 ;
-(void)setInitialTouchLocation:(CGPoint)arg1 ;
-(CGPoint)initialTouchLocation;
-(BOOL)isDraggingWindow;
-(BOOL)isResizingWindow;
-(id)handwritingDebugViewController;
-(void)setHandwritingDebugDelegate:(id<ICHandwritingDebugDelegate>)arg1 ;
-(id<ICHandwritingDebugDelegate>)handwritingDebugDelegate;
-(void)sharedInit;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)navigationController;
-(void)refresh;
@end

