/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSDate, NSString;

@interface _MFLibrarySearchableIndexClientState : NSObject {

	NSNumber* _transactionValue;
	long long _transaction;
	NSDate* _transactionDate;
	NSString* _systemBuildVersion;

}

@property (assign,nonatomic) long long transaction;                      //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionValue; 
@property (nonatomic,retain) NSDate * transactionDate;                   //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,copy) NSString * systemBuildVersion;                //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
+(id)clientStateFromData:(id)arg1 ;
+(id)clientState;
-(long long)transaction;
-(void)setTransaction:(long long)arg1 ;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(id)archiveRepresentation;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(NSNumber *)transactionValue;
-(NSString *)systemBuildVersion;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end

