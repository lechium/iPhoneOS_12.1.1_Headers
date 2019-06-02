/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/NEExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionProviderHostProtocol.h>

@protocol NEExtensionProviderHostProtocol;
@class NSString, NEConfiguration;

@interface NEExtensionProviderContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol> {

	id<NEExtensionProviderHostProtocol> _hostContext;
	NSString* _description;
	NEConfiguration* _configuration;
	/*^block*/id _stopCompletionHandler;

}

@property (copy) id stopCompletionHandler;                          //@synthesize stopCompletionHandler=_stopCompletionHandler - In the implementation block
@property (retain) NEConfiguration * configuration;                 //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)wake;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 deviceIdentifier:(id)arg3 ;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopWithReason:(int)arg1 ;
-(void)startedWithError:(id)arg1 ;
-(void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)neStopReasonToProviderStopReason:(int)arg1 ;
-(void)completeSession;
-(id)stopCompletionHandler;
-(void)setStopCompletionHandler:(id)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(id)hostContext;
-(void)dispose;
-(NSString *)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NEConfiguration *)configuration;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
@end

