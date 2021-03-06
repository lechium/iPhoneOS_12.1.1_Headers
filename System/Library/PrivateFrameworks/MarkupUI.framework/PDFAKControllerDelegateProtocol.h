/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFAKControllerDelegateProtocol <NSObject>
@optional
-(id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
-(CGRect*)positioningRectForCandidatePicker;
-(id)undoManagerForAnnotationController:(id)arg1;
-(id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
-(void)controllerWillDismissSignatureCaptureView:(id)arg1;
-(void)controllerWillDismissSignatureManagerView:(id)arg1;
-(void)controllerWillShowSignatureManagerView:(id)arg1;
-(void)controllerWillShowSignatureCaptureView:(id)arg1;
-(void)penStrokeCompletedForAnnotationController:(id)arg1;
-(void)editDetectedForAnnotationController:(id)arg1;
-(void)editCheckpointReachedForAnnotationController:(id)arg1;
-(void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
-(double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
-(void)controllerWillEnterToolMode:(id)arg1;
-(void)controllerWillExitToolMode:(id)arg1;
-(void)controllerDidEnterToolMode:(id)arg1;
-(void)controllerDidExitToolMode:(id)arg1;

@end

