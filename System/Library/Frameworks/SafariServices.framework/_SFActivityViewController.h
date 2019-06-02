/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivityViewController.h>

@protocol _SFActivityViewControllerDelegate;
@class LPMetadataProvider, _SFPrintController, _SFSafariSharingExtensionController, NSURL, NSString;

@interface _SFActivityViewController : UIActivityViewController {

	LPMetadataProvider* _pendingMessageMetadataProvider;
	_SFPrintController* _printController;
	BOOL _viewCanEarlyDismiss;
	_SFSafariSharingExtensionController* _sharingExtensionController;
	id<_SFActivityViewControllerDelegate> _delegate;
	NSURL* _sharingURL;
	NSString* _currentExtensionIdentifier;

}

@property (nonatomic,copy) NSString * currentExtensionIdentifier;                                                  //@synthesize currentExtensionIdentifier=_currentExtensionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL viewCanEarlyDismiss;                                                           //@synthesize viewCanEarlyDismiss=_viewCanEarlyDismiss - In the implementation block
@property (assign,nonatomic,__weak) _SFSafariSharingExtensionController * sharingExtensionController;              //@synthesize sharingExtensionController=_sharingExtensionController - In the implementation block
@property (assign,nonatomic,__weak) id<_SFActivityViewControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * sharingURL;                                                                   //@synthesize sharingURL=_sharingURL - In the implementation block
+(id)activeWebPageExtensionItemForURL:(id)arg1 withPreviewImageHandler:(/*^block*/id)arg2 ;
-(NSURL *)sharingURL;
-(void)setSharingURL:(NSURL *)arg1 ;
-(void)_updatePrintControllerWithActivityItems:(id)arg1 ;
-(void)activityDidComplete:(id)arg1 withReturnedItems:(id)arg2 success:(BOOL)arg3 ;
-(NSString *)currentExtensionIdentifier;
-(void)_processJavaScriptFinalizeReturnedItems:(id)arg1 forExtension:(id)arg2 ;
-(void)prepareJavaScriptExtensionItemForActivity:(id)arg1 ;
-(void)_preparePrint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCurrentExtensionIdentifier:(NSString *)arg1 ;
-(id)_extensionItemForExtensionActivity:(id)arg1 ;
-(id)_javaScriptProcessingFileURLInExtension:(id)arg1 ;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 sharingURL:(id)arg3 sourceURL:(id)arg4 ;
-(void)prepareMessageActivity:(id)arg1 withWebView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)viewCanEarlyDismiss;
-(_SFSafariSharingExtensionController *)sharingExtensionController;
-(void)setSharingExtensionController:(_SFSafariSharingExtensionController *)arg1 ;
-(void)setDelegate:(id<_SFActivityViewControllerDelegate>)arg1 ;
-(id<_SFActivityViewControllerDelegate>)delegate;
-(void)_prepareActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_executeActivity;
@end

