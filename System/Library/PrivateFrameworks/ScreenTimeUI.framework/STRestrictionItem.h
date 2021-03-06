/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/ScreenTimeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface STRestrictionItem : NSObject <NSCopying> {

	NSString* _rmConfiguration;
	NSString* _payloadKey;
	NSString* _uiLabel;
	unsigned long long _restrictionType;
	id _otherInfo;

}

@property (nonatomic,copy,readonly) NSString * rmConfiguration;                 //@synthesize rmConfiguration=_rmConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSString * payloadKey;                      //@synthesize payloadKey=_payloadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * uiLabel;                         //@synthesize uiLabel=_uiLabel - In the implementation block
@property (nonatomic,readonly) unsigned long long restrictionType;              //@synthesize restrictionType=_restrictionType - In the implementation block
@property (nonatomic,copy,readonly) id otherInfo;                               //@synthesize otherInfo=_otherInfo - In the implementation block
-(unsigned long long)restrictionType;
-(NSString *)uiLabel;
-(NSString *)rmConfiguration;
-(NSString *)payloadKey;
-(id)otherInfo;
-(id)initWithConfiguration:(id)arg1 restrictionKey:(id)arg2 labelName:(id)arg3 type:(unsigned long long)arg4 restrictionValue:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

