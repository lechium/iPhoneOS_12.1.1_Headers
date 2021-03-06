/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSNumber, NSDate, NSDictionary;

@interface MFLibrarySearchableIndexVerificationData : NSObject <NSCopying> {

	NSString* _subject;
	NSArray* _toEmailAddresses;
	NSString* _deleted;
	NSNumber* _contentIndexTransactionId;
	NSNumber* _flags;
	NSNumber* _indexedAsEmptySubject;
	NSDate* _dateReceived;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSString * subject;                                  //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSArray * toEmailAddresses;                          //@synthesize toEmailAddresses=_toEmailAddresses - In the implementation block
@property (nonatomic,copy) NSString * deleted;                                  //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,retain) NSNumber * contentIndexTransactionId;              //@synthesize contentIndexTransactionId=_contentIndexTransactionId - In the implementation block
@property (nonatomic,retain) NSNumber * flags;                                  //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSNumber * indexedAsEmptySubject;                  //@synthesize indexedAsEmptySubject=_indexedAsEmptySubject - In the implementation block
@property (nonatomic,retain) NSDate * dateReceived;                             //@synthesize dateReceived=_dateReceived - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                             //@synthesize userInfo=_userInfo - In the implementation block
-(NSNumber *)flags;
-(void)setDeleted:(NSString *)arg1 ;
-(NSString *)deleted;
-(NSDate *)dateReceived;
-(NSArray *)toEmailAddresses;
-(NSNumber *)contentIndexTransactionId;
-(void)setToEmailAddresses:(NSArray *)arg1 ;
-(void)setContentIndexTransactionId:(NSNumber *)arg1 ;
-(NSNumber *)indexedAsEmptySubject;
-(void)setIndexedAsEmptySubject:(NSNumber *)arg1 ;
-(void)setDateReceived:(NSDate *)arg1 ;
-(void)setFlags:(NSNumber *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
@end

