/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WBWebsiteDataRecord : NSObject {

	NSString* _domain;
	unsigned long long _usage;

}

@property (nonatomic,copy,readonly) NSObject*<OS_xpc_object> XPCDictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSString * domain;                                                 //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) unsigned long long usage;                                                 //@synthesize usage=_usage - In the implementation block
+(id)websiteDataRecordWithDomain:(id)arg1 ;
+(id)websiteDataRecordFromXPCDictionary:(id)arg1 ;
-(id)_initWithDomain:(id)arg1 usage:(unsigned long long)arg2 ;
-(NSObject*<OS_xpc_object>)XPCDictionaryRepresentation;
-(id)_initWithDomain:(id)arg1 ;
-(NSString *)domain;
-(unsigned long long)usage;
-(void)setUsage:(unsigned long long)arg1 ;
@end
