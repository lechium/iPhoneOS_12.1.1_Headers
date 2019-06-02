/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIDocumentMenuDelegate.h>
#import <UIKit/UIDocumentPickerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol WebOpenPanelResultListener, UIWebFileUploadPanelDelegate;
@class UIDocumentMenuViewController, UIImagePickerController, UIViewController, UIPopoverController, DOMNode, NSArray, UIWebDocumentView, NSObject, NSString;

@interface UIWebFileUploadPanel : UIViewController <UIDocumentMenuDelegate, UIDocumentPickerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate> {

	UIDocumentMenuViewController* _documentMenuController;
	UIImagePickerController* _imagePicker;
	UIViewController* _presentationViewController;
	UIPopoverController* _presentationPopover;
	CGPoint _interactionPoint;
	DOMNode* _interactionElement;
	BOOL _allowMultipleFiles;
	BOOL _isUsingCamera;
	NSArray* _mimeTypes;
	UIWebDocumentView* _documentView;
	NSObject*<WebOpenPanelResultListener> _resultListener;
	id<UIWebFileUploadPanelDelegate> _delegate;
	long long _mediaCaptureType;

}

@property (nonatomic,copy) NSArray * mimeTypes;                                                 //@synthesize mimeTypes=_mimeTypes - In the implementation block
@property (assign,nonatomic) UIWebDocumentView * documentView;                                  //@synthesize documentView=_documentView - In the implementation block
@property (nonatomic,retain) NSObject*<WebOpenPanelResultListener> resultListener;              //@synthesize resultListener=_resultListener - In the implementation block
@property (assign,nonatomic) BOOL allowMultipleFiles;                                           //@synthesize allowMultipleFiles=_allowMultipleFiles - In the implementation block
@property (assign,nonatomic) BOOL isUsingCamera;                                                //@synthesize isUsingCamera=_isUsingCamera - In the implementation block
@property (assign,nonatomic) long long mediaCaptureType;                                        //@synthesize mediaCaptureType=_mediaCaptureType - In the implementation block
@property (assign,nonatomic) id<UIWebFileUploadPanelDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<UIWebFileUploadPanelDelegate>)arg1 ;
-(id<UIWebFileUploadPanelDelegate>)delegate;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)dismiss;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2 ;
-(void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2 ;
-(void)documentMenuWasCancelled:(id)arg1 ;
-(void)documentPickerWasCancelled:(id)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2 ;
-(void)setMimeTypes:(NSArray *)arg1 ;
-(void)setDocumentView:(UIWebDocumentView *)arg1 ;
-(void)setResultListener:(NSObject*<WebOpenPanelResultListener>)arg1 ;
-(void)setAllowMultipleFiles:(BOOL)arg1 ;
-(void)setIsUsingCamera:(BOOL)arg1 ;
-(void)setMediaCaptureType:(long long)arg1 ;
-(void)_dispatchDidDismiss;
-(NSArray *)mimeTypes;
-(BOOL)_string:(id)arg1 hasPrefixCaseInsensitive:(id)arg2 ;
-(id)_UTIsForMIMETypes;
-(id)_mediaTypesForPickerSourceType:(long long)arg1 ;
-(id)_photoPickerWithSourceType:(long long)arg1 ;
-(void)_presentPopoverWithContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_presentFullscreenViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)_documentPickerMenuMediaTypes;
-(void)_showPhotoPickerWithSourceType:(long long)arg1 ;
-(id)_cameraButtonLabel;
-(void)_presentForCurrentInterfaceIdiom:(id)arg1 ;
-(void)_dismissDisplayAnimated:(BOOL)arg1 ;
-(UIWebDocumentView *)documentView;
-(BOOL)_shouldMediaCaptureOpenMediaDevice;
-(void)_adjustMediaCaptureType;
-(void)_showDocumentPickerMenu;
-(void)_cancel;
-(void)_chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3 ;
-(void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 processedImageCount:(unsigned long long)arg4 processedVideoCount:(unsigned long long)arg5 successBlock:(/*^block*/id)arg6 failureBlock:(/*^block*/id)arg7 ;
-(id)_displayStringForPhotos:(unsigned long long)arg1 videos:(unsigned long long)arg2 ;
-(void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(BOOL)_willMultipleSelectionDelegateBeCalled;
-(void)_processMediaInfoDictionaries:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3 ;
-(id)initWithResultListener:(id)arg1 configuration:(id)arg2 documentView:(id)arg3 ;
-(void)present;
-(NSObject*<WebOpenPanelResultListener>)resultListener;
-(BOOL)allowMultipleFiles;
-(BOOL)isUsingCamera;
-(long long)mediaCaptureType;
@end

