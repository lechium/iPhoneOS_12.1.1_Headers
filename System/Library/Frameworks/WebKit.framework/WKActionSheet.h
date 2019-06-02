/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIAlertController.h>

@protocol WKActionSheetDelegate;
@interface WKActionSheet : UIAlertController {

	id<WKActionSheetDelegate> _sheetDelegate;
	unsigned long long _arrowDirections;
	BOOL _isRotating;
	BOOL _readyToPresentAfterRotation;
	long long _currentPresentationStyle;
	RetainPtr<UIViewController>* _currentPresentingViewController;
	RetainPtr<UIViewController>* _presentedViewControllerWhileRotating;
	RetainPtr<id<UIPopoverPresentationControllerDelegate> >* _popoverPresentationControllerDelegateWhileRotating;

}

@property (assign,nonatomic) id<WKActionSheetDelegate> sheetDelegate;              //@synthesize sheetDelegate=_sheetDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long arrowDirections;                   //@synthesize arrowDirections=_arrowDirections - In the implementation block
-(CGRect)_presentationRectForStyle:(long long)arg1 ;
-(void)updateSheetPosition;
-(BOOL)presentSheet:(long long)arg1 ;
-(void)doneWithSheet:(BOOL)arg1 ;
-(id<WKActionSheetDelegate>)sheetDelegate;
-(void)setSheetDelegate:(id<WKActionSheetDelegate>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_cleanup;
-(void)willRotate;
-(void)didRotate;
-(BOOL)presentSheetFromRect:(CGRect)arg1 ;
-(void)_didRotateAndLayout;
-(unsigned long long)arrowDirections;
-(void)setArrowDirections:(unsigned long long)arg1 ;
@end

