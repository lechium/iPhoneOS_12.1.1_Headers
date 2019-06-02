/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber;

@interface HAPAccessoryInfo : HMFObject {

	BOOL _authenticated;
	NSString* _name;
	NSString* _modelName;
	NSString* _manufacturer;
	NSNumber* _category;
	NSString* _certificationStatus;
	NSString* _blacklisted;
	NSString* _ppid;

}

@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * modelName;                        //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,readonly) NSString * manufacturer;                     //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) NSNumber * category;                         //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSString * certificationStatus;              //@synthesize certificationStatus=_certificationStatus - In the implementation block
@property (nonatomic,readonly) NSString * blacklisted;                      //@synthesize blacklisted=_blacklisted - In the implementation block
@property (nonatomic,readonly) NSString * ppid;                             //@synthesize ppid=_ppid - In the implementation block
@property (nonatomic,readonly) BOOL authenticated;                          //@synthesize authenticated=_authenticated - In the implementation block
-(NSString *)manufacturer;
-(BOOL)authenticated;
-(NSString *)blacklisted;
-(NSString *)certificationStatus;
-(BOOL)isBlacklisted;
-(BOOL)isCertified;
-(id)initWithName:(id)arg1 manufacturer:(id)arg2 modelName:(id)arg3 category:(id)arg4 certificationStatus:(id)arg5 blacklisted:(id)arg6 ppid:(id)arg7 ;
-(NSString *)modelName;
-(NSString *)ppid;
-(NSString *)name;
-(id)description;
-(NSNumber *)category;
@end

