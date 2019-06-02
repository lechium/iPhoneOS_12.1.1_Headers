/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SGQPWordBoundaries;

@interface SGQPStoredMessage : NSObject {

	BOOL _isSent;
	NSString* _uniqueIdentifier;
	NSString* _content;
	double _creationTimestamp;
	SGQPWordBoundaries* _wordBoundaries;

}

@property (nonatomic,readonly) NSString * uniqueIdentifier;                      //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * content;                               //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) BOOL isSent;                                      //@synthesize isSent=_isSent - In the implementation block
@property (nonatomic,readonly) double creationTimestamp;                         //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
@property (nonatomic,readonly) SGQPWordBoundaries * wordBoundaries;              //@synthesize wordBoundaries=_wordBoundaries - In the implementation block
+(id)sortByCreationDesc:(id)arg1 ;
+(id)uniqueIdentifiersFromMessages:(id)arg1 ;
+(id)transcriptFromMessages:(id)arg1 limit:(unsigned long long)arg2 ;
+(id)transcriptFromMessages:(id)arg1 ;
+(id)phoneOrEmailFromConversationId:(id)arg1 ;
+(id)messageWithUniqueIdentifier:(id)arg1 content:(id)arg2 isSent:(BOOL)arg3 creationTimestamp:(double)arg4 ;
+(id)messageWithContent:(id)arg1 isSent:(BOOL)arg2 ;
+(id)messageWithContent:(id)arg1 isSent:(BOOL)arg2 creationTimestamp:(double)arg3 ;
-(BOOL)isSent;
-(id)initWithUniqueIdentifier:(id)arg1 content:(id)arg2 isSent:(BOOL)arg3 creationTimestamp:(double)arg4 ;
-(BOOL)isMostRecentReceivedMessageInMessages:(id)arg1 ;
-(BOOL)isMostRecentSentMessageInMessages:(id)arg1 ;
-(SGQPWordBoundaries *)wordBoundaries;
-(double)creationTimestamp;
-(id)init;
-(id)description;
-(NSString *)uniqueIdentifier;
-(NSString *)content;
@end

