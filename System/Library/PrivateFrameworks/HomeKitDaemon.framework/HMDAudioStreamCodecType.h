/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMDAudioStreamCodecType : NSObject <NSCopying> {

	long long _codecType;

}

@property (assign,nonatomic) long long codecType;              //@synthesize codecType=_codecType - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(long long)codecType;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setCodecType:(long long)arg1 ;
-(id)initWithCodecType:(long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
