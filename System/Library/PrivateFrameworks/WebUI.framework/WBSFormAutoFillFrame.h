/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSFormAutoFillFrame <NSObject>
@required
-(BOOL)containsAnyFormElements;
-(OpaqueFormAutoFillFrameRef)frameRef;
-(OpaqueJSContextRef)jsContextForMetadataControllerScriptWorld;
-(OpaqueJSValueRef)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1;
-(id)committedURL;
-(void)enumerateChildFramesUsingBlock:(/*^block*/id)arg1;
-(id)pageMainFrame;

@end
