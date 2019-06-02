/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@interface CKDGetUserPrivacySettingsOperation : CKDOperation {

	long long _discoverable;

}

@property (assign,nonatomic) long long discoverable;              //@synthesize discoverable=_discoverable - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(long long)discoverable;
-(void)setDiscoverable:(long long)arg1 ;
-(id)activityCreate;
-(void)_handleRetrievedPrivacySettings:(id)arg1 ;
-(void)main;
@end

