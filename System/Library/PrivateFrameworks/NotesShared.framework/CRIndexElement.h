/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface CRIndexElement : NSObject <NSCopying> {

	NSUUID* _replica;
	long long _integer;

}

@property (nonatomic,retain) NSUUID * replica;               //@synthesize replica=_replica - In the implementation block
@property (assign,nonatomic) long long integer;              //@synthesize integer=_integer - In the implementation block
+(id)elementWithInteger:(long long)arg1 replica:(id)arg2 ;
-(void)setInteger:(long long)arg1 ;
-(long long)integer;
-(NSUUID *)replica;
-(id)initWithInteger:(long long)arg1 replica:(id)arg2 ;
-(unsigned long long)hashValue;
-(void)setReplica:(NSUUID *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
@end
