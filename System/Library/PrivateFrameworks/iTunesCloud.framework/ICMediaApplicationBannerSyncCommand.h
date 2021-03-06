/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, ICMediaApplicationBanner;

@interface ICMediaApplicationBannerSyncCommand : NSObject <NSCopying> {

	NSDictionary* _responseDictionary;
	long long _commandType;
	ICMediaApplicationBanner* _banner;
	unsigned long long _serialNumber;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) long long commandType;                          //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,readonly) ICMediaApplicationBanner * banner;              //@synthesize banner=_banner - In the implementation block
@property (nonatomic,readonly) unsigned long long serialNumber;                //@synthesize serialNumber=_serialNumber - In the implementation block
-(NSDictionary *)responseDictionary;
-(id)_nameForCommandType:(long long)arg1 ;
-(ICMediaApplicationBanner *)banner;
-(id)initWithResponseDictionary:(id)arg1 ;
-(unsigned long long)serialNumber;
-(long long)commandType;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

