/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/_SFQuickLookDocumentViewDelegate.h>

@class NSArray, UIDocumentInteractionController, _SFQuickLookDocumentView, _SFQuickLookDocument, UIView, NSString;

@interface _SFQuickLookDocumentController : NSObject <_SFQuickLookDocumentViewDelegate> {

	NSArray* _buttonActions;
	UIDocumentInteractionController* _documentInteractionController;
	_SFQuickLookDocumentView* _documentView;
	_SFQuickLookDocument* _quickLookDocument;

}

@property (nonatomic,readonly) UIView * documentView;               //@synthesize documentView=_documentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateActionButtons;
-(id)_supportedApplications;
-(id)_actionTitleForType:(long long)arg1 withActionCount:(unsigned long long)arg2 ;
-(void)presentDocumentInteractionControllerFromRect:(CGRect)arg1 inView:(id)arg2 ;
-(long long)dataOwnerForQuickLookDocumentView:(id)arg1 ;
-(void)quickLookDocumentView:(id)arg1 didSelectActionAtIndex:(long long)arg2 ;
-(id)itemProviderForQuickLookDocumentView:(id)arg1 ;
-(void)updateWithQuickLookDocument:(id)arg1 ;
-(id)init;
-(UIView *)documentView;
@end

