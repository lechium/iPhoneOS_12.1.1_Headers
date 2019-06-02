/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_INUIExtensionContextVending.h>

@class _INUIExtensionContextState, NSString;

@interface _INUIExtensionContext : NSExtensionContext <_INUIExtensionContextVending> {

	_INUIExtensionContextState* _currentExtensionContextState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)setExtensionContextState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CGSize)hostedViewMinimumAllowedSize;
-(CGSize)hostedViewMaximumAllowedSize;
-(id)interfaceParametersDescription;
-(CGSize)_bestAllowedSizeForAllowedSizesDictionary:(id)arg1 ;
-(id)_errorHandlingHostProxy;
-(void)_requestHandlingOfIntent:(id)arg1 ;
@end

