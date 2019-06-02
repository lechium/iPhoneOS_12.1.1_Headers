/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, HMFMessageDestination, NSDictionary;

@interface HMDIDSMessageContext : HMFObject {

	NSUUID* _identifier;
	HMFMessageDestination* _destination;
	NSDictionary* _userInfo;

}

@property (copy,readonly) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMFMessageDestination * destination;              //@synthesize destination=_destination - In the implementation block
@property (copy,readonly) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
-(id)initWithIdentifier:(id)arg1 destination:(id)arg2 userInfo:(id)arg3 ;
-(id)init;
-(NSUUID *)identifier;
-(NSDictionary *)userInfo;
-(HMFMessageDestination *)destination;
@end

