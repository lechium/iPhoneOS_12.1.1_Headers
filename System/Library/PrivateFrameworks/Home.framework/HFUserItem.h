/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMHome, HMUser, HFUserNameFormatter, NSString;

@interface HFUserItem : HFItem <HFHomeKitItemProtocol, NSCopying> {

	HMHome* _home;
	HMUser* _user;
	HFUserNameFormatter* _userNameFormatter;

}

@property (nonatomic,readonly) HFUserNameFormatter * userNameFormatter;              //@synthesize userNameFormatter=_userNameFormatter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                        //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMUser * user;                                        //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) unsigned long long nameStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(HMHome *)home;
-(unsigned long long)nameStyle;
-(id)initWithHome:(id)arg1 user:(id)arg2 nameStyle:(unsigned long long)arg3 ;
-(HFUserNameFormatter *)userNameFormatter;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HMUser *)user;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

