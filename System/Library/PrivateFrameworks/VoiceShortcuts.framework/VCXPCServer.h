/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class VCVoiceShortcutManager, NSXPCListener, NSXPCListenerEndpoint, NSString;

@interface VCXPCServer : NSObject <NSXPCListenerDelegate> {

	BOOL _skipEntitlementsCheck;
	VCVoiceShortcutManager* _manager;
	NSXPCListener* _xpcListener;

}

@property (nonatomic,readonly) BOOL skipEntitlementsCheck;                    //@synthesize skipEntitlementsCheck=_skipEntitlementsCheck - In the implementation block
@property (nonatomic,readonly) VCVoiceShortcutManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSXPCListener * xpcListener;                   //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(NSXPCListener *)xpcListener;
-(id)init;
-(VCVoiceShortcutManager *)manager;
-(NSXPCListenerEndpoint *)endpoint;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithListener:(id)arg1 useEphemeralStore:(BOOL)arg2 ;
-(BOOL)skipEntitlementsCheck;
-(id)initWithAnonymousListenerUseEphemeralStore:(BOOL)arg1 ;
@end
