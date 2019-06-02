/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPreviewInteractionControllerDelegate.h>
#import <UIKit/UIViewControllerPreviewing_Internal.h>

@protocol UIViewControllerPreviewingDelegate;
@class UIView, UIViewController, _UIPreviewInteractionController, NSString, UIGestureRecognizer;

@interface _UIViewControllerPreviewingContext : NSObject <_UIPreviewInteractionControllerDelegate, UIViewControllerPreviewing_Internal> {

	id<UIViewControllerPreviewingDelegate> _delegate;
	UIView* _customViewForInteractiveHighlight;
	UIView* _sourceView;
	UIViewController* _viewController;
	_UIPreviewInteractionController* _previewInteractionController;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UIView * sourceView;                                                                    //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                               //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) _UIPreviewInteractionController * previewInteractionController;                         //@synthesize previewInteractionController=_previewInteractionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIGestureRecognizer * previewingGestureRecognizerForFailureRelationship; 
@property (nonatomic,readonly) id<UIViewControllerPreviewingDelegate> delegate; 
@property (assign,nonatomic) CGRect sourceRect;                                                                      //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,retain) UIView * customViewForInteractiveHighlight;                                             //@synthesize customViewForInteractiveHighlight=_customViewForInteractiveHighlight - In the implementation block
-(void)setDelegate:(id<UIViewControllerPreviewingDelegate>)arg1 ;
-(id<UIViewControllerPreviewingDelegate>)delegate;
-(UIViewController *)viewController;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3 ;
-(UIView *)sourceView;
-(CGRect)sourceRect;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)unregister;
-(UIGestureRecognizer *)previewingGestureRecognizerForFailureRelationship;
-(UIView *)customViewForInteractiveHighlight;
-(void)setCustomViewForInteractiveHighlight:(UIView *)arg1 ;
-(CGRect)preferredSourceViewRectInCoordinateSpace:(id)arg1 ;
-(id)initWithSourceView:(id)arg1 viewController:(id)arg2 ;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forLocation:(CGPoint)arg3 inSourceView:(id)arg4 ;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)previewInteractionController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)previewInteractionController:(id)arg1 commitViewController:(id)arg2 ;
-(_UIPreviewInteractionController *)previewInteractionController;
-(void)setPreviewInteractionController:(_UIPreviewInteractionController *)arg1 ;
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtLocation:(CGPoint)arg2 inCoordinateSpace:(id)arg3 presentingViewController:(id*)arg4 ;
@end

