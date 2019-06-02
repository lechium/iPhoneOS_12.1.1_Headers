/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKBrowserViewControllerSendDelegate <NSObject>
@optional
-(void)dismissAndReloadInputViews:(BOOL)arg1 forPlugin:(id)arg2;
-(BOOL)commitPayload:(id)arg1 forPlugin:(id)arg2 allowAllCommits:(BOOL)arg3 error:(id*)arg4;
-(void)commitSticker:(id)arg1 atScreenCoordinate:(CGPoint)arg2 scale:(double)arg3 rotation:(double)arg4;
-(void)commitSticker:(id)arg1 forPlugin:(id)arg2;
-(void)dismissAndPresentPhotosApp;
-(void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2 forPlugin:(id)arg3;
-(void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2 forPlugin:(id)arg3 completion:(/*^block*/id)arg4;
-(void)requestPresentationStyleExpanded:(BOOL)arg1 forPlugin:(id)arg2;
-(void)requestPresentationStyleFullScreenModalForPlugin:(id)arg1;
-(BOOL)handwritingIsDisplayed;
-(void)eagerUploadPayload:(id)arg1 identifier:(id)arg2 replace:(BOOL)arg3;
-(void)eagerUploadCancelIdentifier:(id)arg1;
-(void)setEntryViewHidden:(BOOL)arg1;

@required
-(void)startEditingPayload:(id)arg1;
-(void)setLocalUserIsTyping:(BOOL)arg1;
-(id)dragControllerTranscriptDelegate;
-(void)dismissAndReloadInputViews:(BOOL)arg1;
-(void)requestPresentationStyleExpanded:(BOOL)arg1;
-(void)commitPayload:(id)arg1;
-(void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2;
-(void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)dismissToKeyboard:(BOOL)arg1;
-(void)commitSticker:(id)arg1;
-(void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
-(void)dismiss;

@end

