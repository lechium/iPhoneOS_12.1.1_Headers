/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBProcess.h>

@class FBExtensionInfo, NSString, FBProcess;

@interface FBExtensionProcess : FBProcess {

	BOOL _XPCBundle;
	int _hostPID;
	FBExtensionInfo* _extensionInfo;
	NSString* _hostBundleID;

}

@property (nonatomic,readonly) FBExtensionInfo * extensionInfo;                //@synthesize extensionInfo=_extensionInfo - In the implementation block
@property (nonatomic,__weak,readonly) FBProcess * hostProcess; 
@property (nonatomic,copy,readonly) NSString * hostBundleID;                   //@synthesize hostBundleID=_hostBundleID - In the implementation block
@property (nonatomic,readonly) int hostPID;                                    //@synthesize hostPID=_hostPID - In the implementation block
@property (getter=isXPCBundle,nonatomic,readonly) BOOL XPCBundle;              //@synthesize XPCBundle=_XPCBundle - In the implementation block
-(id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3 ;
-(BOOL)isExtensionProcess;
-(FBExtensionInfo *)extensionInfo;
-(NSString *)hostBundleID;
-(BOOL)isXPCBundle;
-(FBProcess *)hostProcess;
-(id)succinctDescriptionBuilder;
-(int)hostPID;
@end

