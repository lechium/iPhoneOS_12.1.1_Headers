/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/FLExtensionRemoteInterface.h>

@class NSString;

@interface FLExtensionContext : NSExtensionContext <FLExtensionRemoteInterface> {

	id _shadowPrincipalObject;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)followUpPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_shadowPrincipalObject;
-(id)extensionLogicProvider;
-(void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)hostContextWithErrorHandler:(/*^block*/id)arg1 ;
@end

