/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDragGestureRecognizerDelegate.h>
#import <UIKit/UIInteraction_Internal.h>
#import <UIKit/UIDragInteraction.h>
#import <UIKitCore/_UIDraggingItemVisualTarget.h>
#import <UIKit/UIInteraction.h>

@protocol UIDropInteractionDelegate, _UIViewDraggingDestinationDelegate, UIDropInteractionEffect;
@class NSMutableSet, NSMapTable, UIView, UIDropInteractionContextImpl, UIPasteConfiguration, NSString;

@interface UIDropInteraction : NSObject <UIDragGestureRecognizerDelegate, UIInteraction_Internal, UIDragInteraction, _UIDraggingItemVisualTarget, UIInteraction> {

	NSMutableSet* _activeDragGestureRecognizers;
	NSMapTable* _enteredDropSessionByDraggingSession;
	unsigned long long _potentialDragOperation;
	NSMapTable* _itemsTableBySession;
	BOOL _allowsSimultaneousDropSessions;
	BOOL _wantsDefaultVisualBehavior;
	id<UIDropInteractionDelegate> _delegate;
	UIView* _view;
	UIDropInteractionContextImpl* _context;
	id<_UIViewDraggingDestinationDelegate> _viewDelegate;
	UIPasteConfiguration* _pasteConfiguration;
	id<UIDropInteractionEffect> _interactionEffect;

}

@property (assign,nonatomic,__weak) UIView * view;                                                                                                   //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIDropInteractionContextImpl * context;                                                                                 //@synthesize context=_context - In the implementation block
@property (getter=_viewDelegate,nonatomic,__weak,readonly) id<_UIViewDraggingDestinationDelegate> viewDelegate;                                      //@synthesize viewDelegate=_viewDelegate - In the implementation block
@property (getter=_pasteConfiguration,nonatomic,copy,readonly) UIPasteConfiguration * pasteConfiguration;                                            //@synthesize pasteConfiguration=_pasteConfiguration - In the implementation block
@property (nonatomic,retain) id<UIDropInteractionEffect> interactionEffect;                                                                          //@synthesize interactionEffect=_interactionEffect - In the implementation block
@property (assign,setter=_setWantsDefaultVisualBehavior:,getter=_wantsDefaultVisualBehavior,nonatomic) BOOL wantsDefaultVisualBehavior;              //@synthesize wantsDefaultVisualBehavior=_wantsDefaultVisualBehavior - In the implementation block
@property (nonatomic,__weak,readonly) id<UIDropInteractionDelegate> delegate;                                                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsSimultaneousDropSessions;                                                                                    //@synthesize allowsSimultaneousDropSessions=_allowsSimultaneousDropSessions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<UIDropInteractionDelegate>)arg1 ;
-(UIView *)view;
-(BOOL)isActive;
-(id<UIDropInteractionDelegate>)delegate;
-(void)setContext:(UIDropInteractionContextImpl *)arg1 ;
-(UIDropInteractionContextImpl *)context;
-(void)setView:(UIView *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(id)_viewDelegate;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(id<UIDropInteractionEffect>)interactionEffect;
-(void)setInteractionEffect:(id<UIDropInteractionEffect>)arg1 ;
-(void)_dragDestinationGestureStateChanged:(id)arg1 ;
-(BOOL)_allowsSimultaneousDragWithEvent:(id)arg1 ;
-(BOOL)_canHandleDragEvent:(id)arg1 ;
-(BOOL)allowsSimultaneousDropSessions;
-(void)_dropSessionEntered:(id)arg1 withSessionDestination:(id)arg2 ;
-(unsigned long long)_validateDragOperation:(unsigned long long)arg1 forSelector:(SEL)arg2 delegate:(id)arg3 dropSession:(id)arg4 onSession:(id)arg5 forbidden:(BOOL*)arg6 ;
-(unsigned long long)_setLastDragOperation:(unsigned long long)arg1 forbidden:(BOOL)arg2 precise:(BOOL)arg3 prefersFullSizePreview:(BOOL)arg4 onSession:(id)arg5 ;
-(void)_dragDestinationViewDelegateForward:(id)arg1 delegate:(id)arg2 ;
-(id)_pasteConfiguration;
-(void)_prepareItemsInSessionForDrop:(id)arg1 ;
-(void)_cleanupItemsInSessionAfterDrop:(id)arg1 ;
-(id)_dropItemForDroppingDraggingItem:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveDragEvent:(id)arg2 ;
-(id)_dynamicGestureRecognizersForEvent:(id)arg1 ;
-(CGRect)_targetFrameOfDraggingItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(void)_draggingItem:(id)arg1 willAnimateSetDownWithAnimator:(id)arg2 ;
-(id)_initWithViewDelegate:(id)arg1 ;
-(id)_initWithPasteConfiguration:(id)arg1 ;
-(void)_setWantsDefaultVisualBehavior:(BOOL)arg1 ;
-(void)_prepareForSetDownAnimationInWindow:(id)arg1 withDraggingItem:(id)arg2 visibleDroppedItem:(id)arg3 ;
-(void)_sendSessionDidEnd:(id)arg1 ;
-(void)setAllowsSimultaneousDropSessions:(BOOL)arg1 ;
-(BOOL)_wantsDefaultVisualBehavior;
@end

