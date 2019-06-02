/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InputContext/InputContext-Structs.h>
@class NSString;

@interface _ICNamedEntityRecord : NSObject {

	unsigned char _changeType;
	NSString* _name;
	NSString* _source;
	NSString* _type;

}

@property (nonatomic,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * source;                     //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned char changeType;              //@synthesize changeType=_changeType - In the implementation block
-(unsigned char)changeType;
-(BOOL)isEqualToNamedEntityRecord:(id)arg1 ;
-(id)initWithName:(id)arg1 source:(id)arg2 type:(id)arg3 changeType:(unsigned char)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(NSString *)source;
@end

