/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface MSPPathComponent : NSObject <NSCopying> {

	unsigned short _index;
	NSUUID* _originIdentifier;

}

@property (nonatomic,readonly) NSUUID * originIdentifier;              //@synthesize originIdentifier=_originIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned short index;                   //@synthesize index=_index - In the implementation block
-(id)initWithIndex:(unsigned short)arg1 originIdentifier:(id)arg2 ;
-(NSUUID *)originIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(unsigned short)index;
@end

