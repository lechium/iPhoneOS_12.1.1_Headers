/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RemoteManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, RMFamilyMember, NSString;

@interface RMFamily : NSObject <NSCopying> {

	NSArray* _members;
	RMFamilyMember* _me;
	NSString* _dataSource;

}

@property (nonatomic,copy) NSString * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSArray * members;                  //@synthesize members=_members - In the implementation block
@property (nonatomic,retain) RMFamilyMember * me;              //@synthesize me=_me - In the implementation block
-(void)setMe:(RMFamilyMember *)arg1 ;
-(RMFamilyMember *)me;
-(NSArray *)members;
-(void)setMembers:(NSArray *)arg1 ;
-(id)initWithMembers:(id)arg1 ;
-(id)initWithFamilyCircle:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)dataSource;
-(void)setDataSource:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

