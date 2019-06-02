/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPrintActivity.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>
#import <UIKit/UIDocumentPickerDelegate.h>

@class QLPreviewController, UICreatePDFActivityItem, NSString;

@interface UICreatePDFActivity : UIPrintActivity <QLPreviewControllerDelegate, QLPreviewControllerDataSource, UIDocumentPickerDelegate> {

	QLPreviewController* _previewController;
	UICreatePDFActivityItem* _previewURLItem;

}

@property (nonatomic,retain) QLPreviewController * previewController;               //@synthesize previewController=_previewController - In the implementation block
@property (nonatomic,retain) UICreatePDFActivityItem * previewURLItem;              //@synthesize previewURLItem=_previewURLItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cleanup;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(id)activityTitle;
-(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)activityViewController;
-(id)dismissActionsForPreviewController:(id)arg1 ;
-(QLPreviewController *)previewController;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(BOOL)previewController:(id)arg1 canEditItem:(id)arg2 ;
-(BOOL)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2 ;
-(id)excludedActivityTypesForPreviewController:(id)arg1 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(id)_activityBundleImageConfiguration;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)_embeddedActivityViewController;
-(void)_setupQuickLookWithURL:(id)arg1 activityItems:(id)arg2 isPreview:(BOOL)arg3 ;
-(BOOL)shouldAppendDefaultDismissActionsForPreviewController:(id)arg1 ;
-(BOOL)shouldPresentDismissActionsWithoutEditedItemsForPreviewController:(id)arg1 ;
-(void)setPreviewController:(QLPreviewController *)arg1 ;
-(UICreatePDFActivityItem *)previewURLItem;
-(void)setPreviewURLItem:(UICreatePDFActivityItem *)arg1 ;
@end

