/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSString;

@interface CKDPCSIdentityWrapper : NSObject {

	NSString* _identityString;
	PCSIdentitySetDataRef _identitySet;
	NSString* _primaryServiceName;
	NSString* _dsid;

}

@property (nonatomic,readonly) PCSIdentitySetDataRef identitySet;              //@synthesize identitySet=_identitySet - In the implementation block
@property (nonatomic,readonly) NSString * primaryServiceName;                  //@synthesize primaryServiceName=_primaryServiceName - In the implementation block
@property (nonatomic,readonly) NSString * identityString;                      //@synthesize identityString=_identityString - In the implementation block
@property (nonatomic,readonly) NSString * dsid;                                //@synthesize dsid=_dsid - In the implementation block
-(NSString *)primaryServiceName;
-(PCSIdentitySetDataRef)identitySet;
-(id)initWithIdentitySet:(PCSIdentitySetDataRef)arg1 withPrimaryServiceName:(id)arg2 dsid:(id)arg3 ;
-(NSString *)identityString;
-(NSString *)dsid;
-(void)dealloc;
@end

