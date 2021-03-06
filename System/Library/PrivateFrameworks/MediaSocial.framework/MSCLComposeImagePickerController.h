/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol MSCLComposeImagePickerDelegate;
@class UIImagePickerController, UIPopoverPresentationController, UIView, NSString;

@interface MSCLComposeImagePickerController : NSObject <UIPopoverPresentationControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	id<MSCLComposeImagePickerDelegate> _delegate;
	UIImagePickerController* _imagePickerController;
	UIPopoverPresentationController* _popoverPresentationController;
	CGRect _popoverSourceRect;
	UIView* _popoverSourceView;
	long long _sourceType;

}

@property (assign,nonatomic,__weak) id<MSCLComposeImagePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGRect popoverSourceRect;                                        //@synthesize popoverSourceRect=_popoverSourceRect - In the implementation block
@property (nonatomic,retain) UIView * popoverSourceView;                                      //@synthesize popoverSourceView=_popoverSourceView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)popoverSourceView;
-(void)setPopoverSourceView:(UIView *)arg1 ;
-(CGRect)popoverSourceRect;
-(id)initWithImagePickerSourceType:(long long)arg1 ;
-(void)setPopoverSourceRect:(CGRect)arg1 ;
-(void)presentImagePickerAnimated:(BOOL)arg1 ;
-(void)_sendImagePickerDidCancel;
-(void)dealloc;
-(void)setDelegate:(id<MSCLComposeImagePickerDelegate>)arg1 ;
-(id<MSCLComposeImagePickerDelegate>)delegate;
-(id)popoverPresentationController;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
@end

