/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIDocumentPasswordViewDelegate.h>

@class UIView, PDFView;

@interface PDFPasswordViewController : UIViewController <UIDocumentPasswordViewDelegate> {

	UIView* _passwordView;
	PDFView* _pdfView;

}
-(void)setPDFView:(id)arg1 ;
-(void)loadView;
-(void)_commonInit;
-(void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2 ;
@end

