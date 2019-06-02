/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface MSASComment : NSObject <NSSecureCoding> {

	BOOL _isLike;
	BOOL _isCaption;
	BOOL _isBatchComment;
	BOOL _isDeletable;
	BOOL _isMine;
	int _ID;
	NSString* _GUID;
	NSDate* _timestamp;
	NSDate* _clientTimestamp;
	NSString* _personID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _fullName;
	NSString* _email;
	NSString* _content;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (assign,nonatomic) int ID;                                  //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSDate * clientTimestamp;                //@synthesize clientTimestamp=_clientTimestamp - In the implementation block
@property (nonatomic,retain) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                     //@synthesize lastName=_lastName - In the implementation block
@property (assign,nonatomic) BOOL isDeletable;                        //@synthesize isDeletable=_isDeletable - In the implementation block
@property (assign,nonatomic) BOOL isMine;                             //@synthesize isMine=_isMine - In the implementation block
@property (assign,nonatomic) BOOL isLike;                             //@synthesize isLike=_isLike - In the implementation block
@property (assign,nonatomic) BOOL isCaption;                          //@synthesize isCaption=_isCaption - In the implementation block
@property (assign,nonatomic) BOOL isBatchComment;                     //@synthesize isBatchComment=_isBatchComment - In the implementation block
@property (nonatomic,retain) NSString * content;                      //@synthesize content=_content - In the implementation block
+(id)MSASPCommentFromProtocolDictionary:(id)arg1 ;
+(id)comment;
+(BOOL)supportsSecureCoding;
-(void)setContent:(NSString *)arg1 ;
-(void)setPersonID:(NSString *)arg1 ;
-(NSString *)personID;
-(void)setClientTimestamp:(NSDate *)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)email;
-(void)setFullName:(NSString *)arg1 ;
-(void)setIsBatchComment:(BOOL)arg1 ;
-(void)setIsCaption:(BOOL)arg1 ;
-(NSString *)GUID;
-(void)setIsDeletable:(BOOL)arg1 ;
-(void)setIsMine:(BOOL)arg1 ;
-(BOOL)isBatchComment;
-(BOOL)isLike;
-(void)setIsLike:(BOOL)arg1 ;
-(BOOL)isDeletable;
-(void)setEmail:(NSString *)arg1 ;
-(NSDate *)clientTimestamp;
-(BOOL)isMine;
-(BOOL)isCaption;
-(NSString *)firstName;
-(NSString *)lastName;
-(int)ID;
-(NSString *)fullName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setID:(int)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)content;
@end

