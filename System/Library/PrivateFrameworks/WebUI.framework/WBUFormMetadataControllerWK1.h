/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <SafariShared/WBSFormMetadataController.h>

@class WebScriptWorld;

@interface WBUFormMetadataControllerWK1 : WBSFormMetadataController {

	WebScriptWorld* _scriptWorld;

}

@property (nonatomic,readonly) WebScriptWorld * scriptWorld;              //@synthesize scriptWorld=_scriptWorld - In the implementation block
+(id)sharedFormMetadataController;
-(WebScriptWorld *)scriptWorld;
-(void)clearScriptWorld;
-(id)formAutoFillNodeForJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(BOOL)shouldAttemptToClassifyFormsWithoutAPasswordFieldAsLoginForms;
@end
