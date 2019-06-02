/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, AXIPCServerClientRegistrationDelegate;
@class NSString, NSObject;

@interface AXIPCServerClientRegistration : NSObject {

	unsigned _port;
	NSString* _identifier;
	NSObject*<OS_dispatch_source> _invalidationSource;
	id<AXIPCServerClientRegistrationDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned port;                                                        //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> invalidationSource;                     //@synthesize invalidationSource=_invalidationSource - In the implementation block
@property (assign,nonatomic,__weak) id<AXIPCServerClientRegistrationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithPort:(unsigned)arg1 identifier:(id)arg2 ;
-(NSObject*<OS_dispatch_source>)invalidationSource;
-(void)dealloc;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setDelegate:(id<AXIPCServerClientRegistrationDelegate>)arg1 ;
-(id<AXIPCServerClientRegistrationDelegate>)delegate;
-(unsigned)port;
@end

