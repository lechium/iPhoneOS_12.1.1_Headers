/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIShareExtensionHost <NSObject>
@required
-(void)shareExtensionServiceChangeSheetDismissButtonTitle:(id)arg1;
-(void)shareExtensionServiceChangeSheetDismissButtonHidden:(BOOL)arg1;
-(void)shareExtensionServiceDisableSheetAvoidsKeyboardUntilContentSizeUpdate;
-(void)shareExtensionServiceWillPerformInServiceActivityWithDataRequest:(id)arg1 dismissPresentation:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)shareExtensionServiceDidFinishPerformingInServiceActivityWithUUID:(id)arg1 responseData:(id)arg2;
-(void)shareExtensionServiceRequestPerformActivityInHostForActivityUUID:(id)arg1;
-(void)shareExtensionServiceRequestPerformActivityInHostForExtensionActivityWithBundleIdentifier:(id)arg1;
-(void)shareExtensionServiceAirDropActivityDidSuccessfullyStartTransfer;
-(void)shareExtensionServiceAirDropActivityDidSuccessfullyCompleteTransfer;

@end
