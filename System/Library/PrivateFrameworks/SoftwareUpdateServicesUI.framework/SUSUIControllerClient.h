/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SUSUIControllerServerInterface.h>

@class NSXPCConnection, NSString;

@interface SUSUIControllerClient : NSObject <SUSUIControllerServerInterface> {

	NSXPCConnection* _serverConnection;
	BOOL _connected;
	BOOL _serverIsExiting;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_remoteInterface;
-(void)_connectToServerIfNecessary;
-(void)_noteConnectionDropped;
-(void)_invalidateConnection;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)createKeybagWithSecret:(id)arg1 ;
-(void)_noteServerExiting;
-(id)init;
-(void)dealloc;
-(void)invalidate;
@end

