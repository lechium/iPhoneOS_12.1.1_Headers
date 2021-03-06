/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVTAvatarFetchRequest : NSObject {

	NSString* _identifier;
	long long _criteria;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long criteria;                      //@synthesize criteria=_criteria - In the implementation block
+(id)requestForAllAvatars;
+(id)requestForStorePrimaryAvatar;
+(id)requestForCustomAvatars;
+(id)requestForPredefinedAvatars;
+(id)requestForAvatarWithIdentifier:(id)arg1 ;
-(long long)criteria;
-(id)initWithCriteria:(long long)arg1 ;
-(id)initWithCriteria:(long long)arg1 identifier:(id)arg2 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

