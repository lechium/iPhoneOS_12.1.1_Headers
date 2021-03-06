/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMROriginCommandHandler.h>

@class NMROrigin, NSString;

@interface NMROriginMediaRemoteCommandHandler : NSObject <NMROriginCommandHandler> {

	NSString* _applicationBundleIdentifier;
	NMROrigin* _origin;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NMROrigin * origin;                  //@synthesize origin=_origin - In the implementation block
-(id)initWithOrigin:(id)arg1 ;
-(void)_updateApplicationBundleIdentifier;
-(void)sendMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 launchApp:(BOOL)arg3 ;
-(NMROrigin *)origin;
@end

